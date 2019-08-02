import React from "react";
import { Platform } from "react-native";
import {
  createStackNavigator,
  createBottomTabNavigator
} from "react-navigation";

import TabBarIcon from "../components/TabBarIcon";
import HomeScreen from "../screens/HomeScreen";
import LinksScreen from "../screens/LinksScreen";
import SettingsScreen from "../screens/SettingsScreen";

let tabBarIconSize = 38;

const config = Platform.select({
  web: { headerMode: "screen" },
  default: {},
  style: { backgroundColor: "rgba(0, 0, 0, 0)" }
});

const HomeStack = createStackNavigator(
  {
    Home: HomeScreen
  },
  config
);

HomeStack.navigationOptions = {
  tabBarLabel: "Home",
  tabBarIcon: ({ focused }) => (
    <TabBarIcon
      size={tabBarIconSize}
      focused={focused}
      name={Platform.OS === "ios" ? "ios-compass" : "md-compass"}
    />
  )
};

HomeStack.path = "";

const LinksStack = createStackNavigator(
  {
    Links: LinksScreen
  },
  config
);

LinksStack.navigationOptions = {
  tabBarLabel: "My Trip",
  tabBarIcon: ({ focused }) => (
    <TabBarIcon
      size={tabBarIconSize}
      focused={focused}
      name={
        Platform.OS === "ios"
          ? "ios-add-circle-outline"
          : "md-add-circle-outline"
      }
    />
  )
};

LinksStack.path = "";

const SettingsStack = createStackNavigator(
  {
    Settings: SettingsScreen
  },
  config
);

SettingsStack.navigationOptions = {
  tabBarLabel: "Settings",
  tabBarIcon: ({ focused }) => (
    <TabBarIcon
      size={tabBarIconSize}
      focused={focused}
      name={Platform.OS === "ios" ? "ios-person" : "md-person"}
    />
  )
};

SettingsStack.path = "";

const tabNavigator = createBottomTabNavigator(
  {
    HomeStack,
    LinksStack,
    SettingsStack
  },
  {
    tabBarOptions: {
      showLabel: false,
      style: {
        backgroundColor: "#fff"
      }
    },
    iconStyle: {
      width: 40,
      height: 40,
      padding: 0 //Padding 0 here
    }
  }
);

tabNavigator.path = "";

export default tabNavigator;
