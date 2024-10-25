def remove(folder: list[str]) -> list[str]:
    folder.sort()  # Sort to process the shortest paths first
    ans = []
    seen = set()
    
    for path in folder:
        parts = path.split("/")
        current = ""
        is_subfolder = False
        
        for part in parts:
            if part:  # Ignore empty strings caused by leading slashes
                current += "/" + part
                if current in seen:
                    is_subfolder = True
                    break
                    
        if not is_subfolder:
            ans.append(current)
            seen.add(current)
    
    return ans

print(remove(["/a", "/a/b", "/a/c"]))
