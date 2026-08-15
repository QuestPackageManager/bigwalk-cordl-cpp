#pragma once
// IWYU pragma private; include "MA/Flora/IntProfilerCounter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IntProfilerCounter)
namespace Unity::Profiling {
struct ProfilerMarkerDataUnit;
}
// Forward declare root types
namespace MA::Flora {
struct IntProfilerCounter;
}
// Write type traits
MARK_VAL_T(::MA::Flora::IntProfilerCounter);
DEFINE_IL2CPP_CLASS(::MA::Flora::IntProfilerCounter, "MA.Flora", "IntProfilerCounter");
// Dependencies System.IntPtr
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.IntProfilerCounter
struct CORDL_TYPE IntProfilerCounter {
public:
// Declarations
 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Method Sample, addr 0x1814cdeb0, size 0x50, virtual false, abstract: false, final false
inline void Sample(int32_t  value) ;

/// @brief Method .ctor, addr 0x1814cdf00, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::Unity::Profiling::ProfilerMarkerDataUnit  unit) ;

/// @brief Method get_IsCreated, addr 0x1802ff710, size 0x10, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

// Ctor Parameters []
// @brief default ctor
constexpr IntProfilerCounter() ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr IntProfilerCounter(::System::IntPtr  m_Handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13266};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Handle, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_Handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::IntProfilerCounter, m_Handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::IntProfilerCounter) == 0x8, "Size mismatch!");

} // namespace end def MA::Flora
