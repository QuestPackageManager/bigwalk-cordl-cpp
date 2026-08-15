#pragma once
// IWYU pragma private; include "Steamworks/Packsize.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Packsize)
namespace Steamworks {
struct Packsize_ValvePackingSentinel_t;
}
// Forward declare root types
namespace Steamworks {
class Packsize;
}
namespace Steamworks {
struct Packsize_ValvePackingSentinel_t;
}
// Write type traits
MARK_REF_T(::Steamworks::Packsize*);
MARK_VAL_T(::Steamworks::Packsize_ValvePackingSentinel_t);
DEFINE_IL2CPP_CLASS(::Steamworks::Packsize*, "Steamworks", "Packsize");
DEFINE_IL2CPP_CLASS(::Steamworks::Packsize_ValvePackingSentinel_t, "Steamworks", "Packsize/ValvePackingSentinel_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.Packsize/ValvePackingSentinel_t
#pragma pack(push, 8)
struct CORDL_TYPE Packsize_ValvePackingSentinel_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Packsize_ValvePackingSentinel_t() ;

// Ctor Parameters [CppParam { name: "m_u32", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_u64", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_u16", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_d", ty: "double_t", modifiers: "", def_value: None }]
constexpr Packsize_ValvePackingSentinel_t(uint32_t  m_u32, uint64_t  m_u64, uint16_t  m_u16, double_t  m_d) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16017};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_u32, offset: 0x0, size: 0x4, def value: None
 uint32_t  m_u32;

/// @brief Field m_u64, offset: 0x8, size: 0x8, def value: None
 uint64_t  m_u64;

/// @brief Field m_u16, offset: 0x10, size: 0x2, def value: None
 uint16_t  m_u16;

/// @brief Field m_d, offset: 0x18, size: 0x8, def value: None
 double_t  m_d;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::Packsize_ValvePackingSentinel_t, m_u32) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::Packsize_ValvePackingSentinel_t, m_u64) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::Packsize_ValvePackingSentinel_t, m_u16) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::Packsize_ValvePackingSentinel_t, m_d) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Steamworks::Packsize_ValvePackingSentinel_t) == 0x20, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.Packsize
class CORDL_TYPE Packsize : public ::System::Object {
public:
// Declarations
using ValvePackingSentinel_t = ::Steamworks::Packsize_ValvePackingSentinel_t;

/// @brief Method Test, addr 0x18057e680, size 0x60, virtual false, abstract: false, final false
static inline bool Test() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Packsize() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Packsize", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Packsize(Packsize && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Packsize", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Packsize(Packsize const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16018};

/// @brief Field value offset 0xffffffff size 0x4
static constexpr int32_t  value{static_cast<int32_t>(0x8)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::Packsize) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
