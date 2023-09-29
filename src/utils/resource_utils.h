#pragma once

#include "resource.h"

#include <filesystem>


namespace cg::utils
{
	void save_resource(resource<cg::unsigned_color>& render_target, const std::filesystem::path& filepath);
}// namespace cg::utils