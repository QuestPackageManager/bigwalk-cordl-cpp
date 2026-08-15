#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalVoicePlayerMicrophoneCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalVoicePlayerMicrophoneCache)
// Forward declare root types
namespace GlobalNamespace {
class LocalVoicePlayerMicrophoneCache;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LocalVoicePlayerMicrophoneCache*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalVoicePlayerMicrophoneCache*, "", "LocalVoicePlayerMicrophoneCache");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalVoicePlayerMicrophoneCache
class CORDL_TYPE LocalVoicePlayerMicrophoneCache : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _microphonePositionCache, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__microphonePositionCache, put=__cordl_internal_set__microphonePositionCache)) int32_t  _microphonePositionCache;

/// @brief Field _wasUpdatedThisFrame, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__wasUpdatedThisFrame, put=__cordl_internal_set__wasUpdatedThisFrame)) bool  _wasUpdatedThisFrame;

/// @brief Method GetMicrophonePosition, addr 0x1803d3e30, size 0x50, virtual false, abstract: false, final false
inline int32_t GetMicrophonePosition() ;

static inline ::GlobalNamespace::LocalVoicePlayerMicrophoneCache* New_ctor() ;

/// @brief Method Update, addr 0x1803d3e80, size 0x10, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get__microphonePositionCache() const;

constexpr int32_t& __cordl_internal_get__microphonePositionCache() ;

constexpr bool const& __cordl_internal_get__wasUpdatedThisFrame() const;

constexpr bool& __cordl_internal_get__wasUpdatedThisFrame() ;

constexpr void __cordl_internal_set__microphonePositionCache(int32_t  value) ;

constexpr void __cordl_internal_set__wasUpdatedThisFrame(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalVoicePlayerMicrophoneCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalVoicePlayerMicrophoneCache", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalVoicePlayerMicrophoneCache(LocalVoicePlayerMicrophoneCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalVoicePlayerMicrophoneCache", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalVoicePlayerMicrophoneCache(LocalVoicePlayerMicrophoneCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4846};

/// @brief Field _microphonePositionCache, offset: 0x20, size: 0x4, def value: None
 int32_t  ____microphonePositionCache;

/// @brief Field _wasUpdatedThisFrame, offset: 0x24, size: 0x1, def value: None
 bool  ____wasUpdatedThisFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalVoicePlayerMicrophoneCache, ____microphonePositionCache) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalVoicePlayerMicrophoneCache, ____wasUpdatedThisFrame) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalVoicePlayerMicrophoneCache) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
