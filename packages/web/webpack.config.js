const path = require("path");
const fs = require("fs");
const url = require("url");

const HtmlWebpackPlugin = require("html-webpack-plugin");
const outputDir = path.join(__dirname, "build/");

const appDirectory = fs.realpathSync(process.cwd());
const resolveApp = relativePath => path.resolve(appDirectory, relativePath);

const isProd = process.env.NODE_ENV === "production";

module.exports = (_, argv) => {
  let NODE_ENV = process.env.NODE_ENV;
  process.env.NODE_ENV = argv.mode || "development";
  const devMode = argv.mode !== "production";

  return {
    entry: "./src/Index.bs.js",
    output: {
      path: outputDir,
      filename: devMode ? "main.js" : "main.[hash].js",
      publicPath: "/"
    },
    plugins: [
      new HtmlWebpackPlugin({
        template: "./src/index.html",
        inject: true
      })
    ],
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
    node: { fs: "empty" }
  };
};
