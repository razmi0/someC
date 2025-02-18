let x = [];
const args = process.argv.slice(2);
if (args.length <= 0) console.error("main.js : No arguments found!");
else {
    for (let i = 0; i < args.length; i++) {
        for (let j = 0; j < args[i]; j++) x[j] = i;
    }
    console.log("Done!");
}
