const path = require("path");
const fs = require("fs");
const url = require("url");
const webpack = require("webpack");
const Dotenv = require("dotenv-webpack");

const HtmlWebpackPlugin = require("html-webpack-plugin");
const outputDir = path.join(__dirname, "build/");

const appDirectory = fs.realpathSync(process.cwd());
const resolveApp = relativePath => path.resolve(appDirectory, relativePath);

module.exports = (_, argv) => {
  let NODE_ENV = process.env.NODE_ENV;
  process.env.NODE_ENV = argv.mode || "development";
  const devMode = argv.mode !== "production";

  return {
    entry: "./src/Index.bs.js",
    mode: devMode ? "development" : "production",
    output: {
      path: outputDir,
      filename: devMode ? "main.js" : "main.[hash].js",
      publicPath: "/"
    },
    optimization: {
      minimize: !devMode
    },
    devtool: !devMode ? false : "eval",
    devServer: {
      contentBase: outputDir,
      publicPath: "/",
      port: process.env.PORT || 3000,
      historyApiFallback: true
    },
    module: {
      rules: []
    },
    plugins: [
      new HtmlWebpackPlugin({
        template: "./src/index.html",
        inject: true
      }),
      new Dotenv({ path: path.resolve(__dirname, ".env") })
    ]
  };
};
