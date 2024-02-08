import qrcode
img = qrcode.make("https://github.com/depermana12")
img.save("qr.png", "PNG")