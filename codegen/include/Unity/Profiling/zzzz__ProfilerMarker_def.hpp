#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerMarker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ProfilerMarker)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace Unity::Profiling::LowLevel {
struct MarkerFlags;
}
namespace Unity::Profiling {
struct ProfilerCategory;
}
namespace Unity::Profiling {
struct ProfilerMarker_AutoScope;
}
// Forward declare root types
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace Unity::Profiling {
struct ProfilerMarker_AutoScope;
}
// Write type traits
MARK_VAL_T(::Unity::Profiling::ProfilerMarker);
MARK_VAL_T(::Unity::Profiling::ProfilerMarker_AutoScope);
DEFINE_IL2CPP_CLASS(::Unity::Profiling::ProfilerMarker, "Unity.Profiling", "ProfilerMarker");
DEFINE_IL2CPP_CLASS(::Unity::Profiling::ProfilerMarker_AutoScope, "Unity.Profiling", "ProfilerMarker/AutoScope");
// Dependencies System.IntPtr
namespace Unity::Profiling {
// Is value type: true
// CS Name: Unity.Profiling.ProfilerMarker/AutoScope
struct CORDL_TYPE ProfilerMarker_AutoScope {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x18223ff90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0x18223ffb0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  markerPtr) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr ProfilerMarker_AutoScope() ;

// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr ProfilerMarker_AutoScope(::System::IntPtr  m_Ptr) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10316};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Ptr, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_Ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Profiling::ProfilerMarker_AutoScope, m_Ptr) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Profiling::ProfilerMarker_AutoScope) == 0x8, "Size mismatch!");

} // namespace end def Unity::Profiling
// Dependencies System.IntPtr
namespace Unity::Profiling {
// Is value type: true
// CS Name: Unity.Profiling.ProfilerMarker
struct CORDL_TYPE ProfilerMarker {
public:
// Declarations
using AutoScope = ::Unity::Profiling::ProfilerMarker_AutoScope;

 __declspec(property(get=get_Handle)) ::System::IntPtr  Handle;

/// @brief Method Auto, addr 0x182248f10, size 0x30, virtual false, abstract: false, final false
inline ::Unity::Profiling::ProfilerMarker_AutoScope Auto() ;

/// @brief Method .ctor, addr 0x18223cde0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Unity::Profiling::ProfilerCategory  category, ::StringW  name) ;

/// @brief Method .ctor, addr 0x182248f40, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::Unity::Profiling::ProfilerCategory  category, ::StringW  name, ::Unity::Profiling::LowLevel::MarkerFlags  flags) ;

/// @brief Method .ctor, addr 0x181465e30, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method get_Handle, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_Handle() ;

// Ctor Parameters []
// @brief default ctor
constexpr ProfilerMarker() ;

// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr ProfilerMarker(::System::IntPtr  m_Ptr) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10317};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Ptr, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_Ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Profiling::ProfilerMarker, m_Ptr) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Profiling::ProfilerMarker) == 0x8, "Size mismatch!");

} // namespace end def Unity::Profiling
