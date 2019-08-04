import React from "react";
import { View, Text, StyleSheet } from "react-native";

const MyTrip = () => {
  return (
    <View>
      <Text>"asda"</Text>
    </View>
  );
};

MyTrip.navigationOptions = {
  title: null
};

const styles = StyleSheet.create({
  container: {
    flex: 1,
    paddingTop: 15,
    backgroundColor: "#fff"
  }
});

export default MyTrip;
