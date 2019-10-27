//
//  ContentView.swift
//  tripdeer
//
//  Created by Max Li on 19/10/19.
//  Copyright © 2019 Max Li. All rights reserved.
//

import SwiftUI

struct ContentView: View {
    let titleColor:Color = Color.white
    var body: some View {
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
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
