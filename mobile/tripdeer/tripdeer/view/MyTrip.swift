//
//  Mytrip.swift
//  tripdeer
//
//  Created by Max Li on 20/10/19.
//  Copyright © 2019 Max Li. All rights reserved.
//

import SwiftUI


struct MyTrip: View {
    
    let title:String = "My trips"
    var items:Int = 0
    var color:Color

    var body: some View {
        VStack {
            Title(title: title, color: color)
            
            if (items > 0 ) {
                List {
                    Rectangle()
                        .fill(Color.orange)
                        .frame(height: 200.0)
                }
            } else {
                
                VStack {
                    Spacer()
                    HStack {
                        Button(action: /*@START_MENU_TOKEN@*/{}/*@END_MENU_TOKEN@*/) {
                            Text("Create a internary")
                                .padding()
                                .frame(minWidth: 0, maxWidth: .infinity)
                                .background(Color.orange)
                                .cornerRadius(50.0, antialiased: true)
                                .foregroundColor(Color.white)
                        }
                    }
                    Spacer()
                }
            }
            
        }
    }
}

struct MyTrip_Previews: PreviewProvider {
    static var previews: some View {
        MyTrip(color: Color.black)
    }
}

