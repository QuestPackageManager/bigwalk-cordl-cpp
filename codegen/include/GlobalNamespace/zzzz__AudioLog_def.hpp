#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioLog.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioLog)
namespace GlobalNamespace {
class AudioAsset;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct AudioLog;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AudioLog);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioLog, "", "AudioLog");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AudioLog
struct CORDL_TYPE AudioLog {
public:
// Declarations
/// @brief Method .ctor, addr 0x18047ca70, size 0x1c0, virtual false, abstract: false, final false
inline void _ctor(::StringW  text, float_t  dspTime, int32_t  frameCount, ::GlobalNamespace::AudioAsset*  asset, ::UnityEngine::Object*  obj, bool  stackTrace, ::UnityEngine::Color  background) ;

// Ctor Parameters []
// @brief default ctor
constexpr AudioLog() ;

// Ctor Parameters [CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "DSPTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "FrameCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Asset", ty: "::UnityW<::GlobalNamespace::AudioAsset>", modifiers: "", def_value: None }, CppParam { name: "Obj", ty: "::UnityW<::UnityEngine::Object>", modifiers: "", def_value: None }, CppParam { name: "ObjName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "StackTrace", ty: "::StringW", modifiers: "", def_value: None }]
constexpr AudioLog(::StringW  Message, float_t  DSPTime, int32_t  FrameCount, ::UnityW<::GlobalNamespace::AudioAsset>  Asset, ::UnityW<::UnityEngine::Object>  Obj, ::StringW  ObjName, ::StringW  StackTrace) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17492};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field Message, offset: 0x0, size: 0x8, def value: None
 ::StringW  Message;

/// @brief Field DSPTime, offset: 0x8, size: 0x4, def value: None
 float_t  DSPTime;

/// @brief Field FrameCount, offset: 0xc, size: 0x4, def value: None
 int32_t  FrameCount;

/// @brief Field Asset, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  Asset;

/// @brief Field Obj, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  Obj;

/// @brief Field ObjName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ObjName;

/// @brief Field StackTrace, offset: 0x28, size: 0x8, def value: None
 ::StringW  StackTrace;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioLog, Message) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLog, DSPTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLog, FrameCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLog, Asset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLog, Obj) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLog, ObjName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLog, StackTrace) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioLog) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
