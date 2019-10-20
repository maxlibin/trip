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

            List {
                Rectangle()
                  .fill(/*@START_MENU_TOKEN@*/Color.orange/*@END_MENU_TOKEN@*/)
                  .frame(height: 200.0)
            }

            Rectangle()
                .fill(Color.orange)
               .frame(height: 200.0)

        }
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
