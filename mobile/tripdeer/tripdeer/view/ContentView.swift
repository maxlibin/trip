//
//  ContentView.swift
//  tripdeer
//
//  Created by Max Li on 19/10/19.
//  Copyright © 2019 Max Li. All rights reserved.
//

import SwiftUI

struct ContentView: View {
    var body: some View {
        VStack {
            Header()
            
            MyTrip()
            
            Popular()

        }
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
