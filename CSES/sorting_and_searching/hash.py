import hashlib

target_hash = "ef574c04a1c0669ca788ddc11330dd2dcf47ca136a8bc7ea15b4635313914a2bcb7b4e79ed77ef701efe71bb71ba844592e8f6899cfa36f217575d989f14b590"

prefix = "8058"

def check_hash(number_str):
    encoded = number_str.encode()

    hashes = {
        "md5": hashlib.md5(encoded).hexdigest(),
        "sha1": hashlib.sha1(encoded).hexdigest(),
        "sha256": hashlib.sha256(encoded).hexdigest(),
        "sha512": hashlib.sha512(encoded).hexdigest(),
    }

    for name, h in hashes.items():
        if h == target_hash:
            print(f"[FOUND] Number: {number_str} | Algorithm: {name}")
            return True
    return False


for i in range(10000):
    suffix = str(i).zfill(4)
    phone_number = prefix + suffix

    if check_hash(phone_number):
        break
else:
    print("No match found.")