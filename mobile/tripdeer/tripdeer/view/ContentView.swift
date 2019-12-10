//
//  ContentView.swift
//  tripdeer
//
//  Created by Max Li on 19/10/19.
//  Copyright © 2019 Max Li. All rights reserved.
//

import SwiftUI

let titleColor:Color = Color.white

struct ContentView: View {
    var body: some View {
        NavigationView {
            ZStack {
                Image("bg")
                    .resizable()
                    .aspectRatio(contentMode: .fill)
                    .frame(minWidth: 0, maxWidth: .infinity)
                    .clipped()
                
                VStack {
                    Header()
                    ZStack {
                        Rectangle()
                            .opacity(0.33)
                        VStack {
                            MyTrip(color: titleColor)
                            
                            Popular(color: titleColor)
                        }.padding()
                    }
                }
            }.edgesIgnoringSafeArea(.all)
                
                .navigationBarTitle("Tripdeer")
                .foregroundColor(Color(red: 0.2, green: 0.2, blue: 0.4, opacity: 1.0))
        }
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
