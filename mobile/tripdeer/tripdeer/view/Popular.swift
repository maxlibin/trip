//
//  Popular.swift
//  tripdeer
//
//  Created by Max Li on 26/10/19.
//  Copyright © 2019 Max Li. All rights reserved.
//

import SwiftUI

struct Popular: View {
    let title = "Popular desination"
    var color:Color
    var body: some View {
        VStack {
            Title(title: title, color: color)
                .padding(.bottom)
            
            
            ScrollView(.horizontal, showsIndicators: false){
                HStack{
                   ForEach(0 ..< 10) { number in
                        ZStack {
                            Image("japan").frame(width: 105.0, height: 150.0).clipped().cornerRadius(5)
                            Rectangle().opacity(0.2)
                            VStack{
                                Spacer()
                                Text("Japan").font(.footnote).fontWeight(.light).foregroundColor(Color.white).padding(.bottom).frame(width: 80.0, alignment: .leading)
                            }
                        }
                   }
                }
            }
        }
        .frame(height: 200)
    }
}

struct Popular_Previews: PreviewProvider {
    static var previews: some View {
        Popular(color: Color.black)
    }
}
