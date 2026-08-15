#pragma once
// IWYU pragma private; include "UnityEngine/Playables/Playable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Playable)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Type;
}
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct Playable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::Playable);
DEFINE_IL2CPP_CLASS(::UnityEngine::Playables::Playable, "UnityEngine.Playables", "Playable");
// Dependencies UnityEngine.Playables.PlayableHandle
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: UnityEngine.Playables.Playable
struct CORDL_TYPE Playable {
public:
// Declarations
/// @brief Field m_NullPlayable, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_m_NullPlayable, put=setStaticF_m_NullPlayable)) ::UnityEngine::Playables::Playable  m_NullPlayable;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Playables::Playable>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Playables::Playable>*() ;

/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr operator  ::UnityEngine::Playables::IPlayable*() ;

/// @brief Method Equals, addr 0x182281440, size 0x60, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Playables::Playable  other) ;

/// @brief Method GetHandle, addr 0x1804f6880, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method GetPlayableType, addr 0x182281ce0, size 0x30, virtual false, abstract: false, final false
inline ::System::Type* GetPlayableType() ;

/// @brief Method .ctor, addr 0x1803bdb10, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Playables::PlayableHandle  handle) ;

static inline ::UnityEngine::Playables::Playable getStaticF_m_NullPlayable() ;

/// @brief Method get_Null, addr 0x182281d40, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::Playable get_Null() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Playables::Playable>"
constexpr ::System::IEquatable_1<::UnityEngine::Playables::Playable>* i___System__IEquatable_1___UnityEngine__Playables__Playable_() ;

/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable() ;

static inline void setStaticF_m_NullPlayable(::UnityEngine::Playables::Playable  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Playable() ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr Playable(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11063};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Playables::PlayableHandle  m_Handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Playables::Playable, m_Handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Playables::Playable) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Playables
