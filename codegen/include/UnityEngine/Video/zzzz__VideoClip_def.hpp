#pragma once
// IWYU pragma private; include "UnityEngine/Video/VideoClip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(VideoClip)
// Forward declare root types
namespace UnityEngine::Video {
class VideoClip;
}
// Write type traits
MARK_REF_T(::UnityEngine::Video::VideoClip*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Video::VideoClip*, "UnityEngine.Video", "VideoClip");
// Dependencies UnityEngine.Object
namespace UnityEngine::Video {
// Is value type: false
// CS Name: UnityEngine.Video.VideoClip
class CORDL_TYPE VideoClip : public ::UnityEngine::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoClip() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoClip", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoClip(VideoClip && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoClip", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoClip(VideoClip const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21532};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Video::VideoClip) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Video
