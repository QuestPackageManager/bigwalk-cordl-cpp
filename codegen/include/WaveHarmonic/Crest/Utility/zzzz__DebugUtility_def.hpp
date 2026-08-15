#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Utility/DebugUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DebugUtility)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
namespace WaveHarmonic::Crest::Utility {
class DebugUtility_DrawLine;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Utility {
class DebugUtility;
}
namespace WaveHarmonic::Crest::Utility {
class DebugUtility_DrawLine;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Utility::DebugUtility*);
MARK_REF_T(::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Utility::DebugUtility*, "WaveHarmonic.Crest.Utility", "DebugUtility");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*, "WaveHarmonic.Crest.Utility", "DebugUtility/DrawLine");
// Dependencies System.MulticastDelegate
namespace WaveHarmonic::Crest::Utility {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Utility.DebugUtility/DrawLine
class CORDL_TYPE DebugUtility_DrawLine : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x182565cd0, size 0xb0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  up, ::UnityEngine::Color  color, float_t  duration, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x182565d80, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  up, ::UnityEngine::Color  color, float_t  duration) ;

static inline ::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x182565f30, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugUtility_DrawLine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugUtility_DrawLine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugUtility_DrawLine(DebugUtility_DrawLine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugUtility_DrawLine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugUtility_DrawLine(DebugUtility_DrawLine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20165};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine) == 0x80, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Utility
// Dependencies System.Object
namespace WaveHarmonic::Crest::Utility {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Utility.DebugUtility
class CORDL_TYPE DebugUtility : public ::System::Object {
public:
// Declarations
using DrawLine = ::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine;

/// @brief Method DrawCross, addr 0x182565550, size 0x2b0, virtual false, abstract: false, final false
static inline void DrawCross(::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*  draw, ::UnityEngine::Vector3  position, float_t  r, ::UnityEngine::Color  color, float_t  duration) ;

/// @brief Method DrawCross, addr 0x182565800, size 0x4d0, virtual false, abstract: false, final false
static inline void DrawCross(::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*  draw, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  up, float_t  r, ::UnityEngine::Color  color, float_t  duration) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugUtility(DebugUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugUtility(DebugUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20166};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Utility::DebugUtility) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Utility
