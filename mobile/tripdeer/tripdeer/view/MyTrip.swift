//
//  Mytrip.swift
//  tripdeer
//
//  Created by Max Li on 20/10/19.
//  Copyright © 2019 Max Li. All rights reserved.
//

import SwiftUI

let title:String = "My trip"

var items:Int = 0

struct MyTrip: View {
    var body: some View {
        
        VStack {
            HStack{
                Text(title)
                    .font(.headline)
                    .fontWeight(.semibold)
                    .multilineTextAlignment(.leading)
                    .padding(.leading)
                    .frame(height: 30.0, alignment: .leading)
                
                Spacer()
            }
            
            items > 0 ?
                
                List {
                    
                    Rectangle()
                        .fill(/*@START_MENU_TOKEN@*/Color.orange/*@END_MENU_TOKEN@*/)
                        .frame(height: 200.0)
                }
                :
                
                List {
                    
                    Rectangle()
                        .fill(Color.blue)
                        .frame(height: 200.0)
            }
            
        }
    }
}

struct MyTrip_Previews: PreviewProvider {
    static var previews: some View {
        MyTrip()
    }
}

