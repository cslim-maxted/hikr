var Context = require("Modules/Context");

function goToHike(arg) {
	// TODO
	//hikes.value = arg.data;
	var hike = arg.data;
	router.push("editHike", hike);	// We have our Router, but what will we do with it?
}

module.exports = {
	hikes: Context.hikes,
	goToHike: goToHike
}