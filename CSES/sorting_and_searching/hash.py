import hmac
import hashlib
import base64

# 1. SALT-ыг Base64-ээс decode
SALT = base64.b64decode("dHVzZ2FsXzZh").decode()  # "tusgal_6a"

TARGET = ("9c891bd5e6412fe40bb6ac225ec666c5fd551ded8c703c6d2a"
          "931364c5b4b3202f8fcaa674633a5359df015b8a8103de4a41"
          "75139076d4fda89a2bc23c2be66e")

# 2. Эхний 4 орон (80, 58 алхмаас тодорхой) → 8058
prefix = "8058"

# 3. HMAC-SHA512 ашиглан 0000-9999 хүртэл brute-force
for i in range(10000):
    pin = f"{i:04d}"
    full_phone = prefix + pin                                  # 8058XXXX
    digest = hmac.new(
        SALT.encode(),                                          # key
        full_phone.encode(),                                    # message
        hashlib.sha512
    ).hexdigest()
    if digest == TARGET:
        print(f"✅ Олдлоо! Бүтэн утасны дугаар: {full_phone}")
        break
else:
    print("❌ Олдсонгүй")

    #test