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
            
            HStack{
                Text("My trip")
                    .font(.headline)
                    .fontWeight(.semibold)
                    .multilineTextAlignment(.leading)
                    .padding(.leading)
                    .frame(height: 30.0, alignment: .leading)

                 Spacer()
            }

            MyTrip()
            
            HStack{
                Text("Popular destination")
                    .font(.headline)
                    .fontWeight(.semibold)
                    .multilineTextAlignment(.leading)
                    .padding(.leading)
                    .frame(height: 30.0, alignment: .leading)

                 Spacer()
            }
            

            Rectangle()
                .fill(Color.orange)
                .frame(height: 160.0)

        }
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
