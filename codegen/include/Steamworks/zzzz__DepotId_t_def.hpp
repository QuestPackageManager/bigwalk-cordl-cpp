#pragma once
// IWYU pragma private; include "Steamworks/DepotId_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DepotId_t)
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Steamworks {
struct DepotId_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::DepotId_t);
DEFINE_IL2CPP_CLASS(::Steamworks::DepotId_t, "Steamworks", "DepotId_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.DepotId_t
struct CORDL_TYPE DepotId_t {
public:
// Declarations
/// @brief Field Invalid, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Invalid, put=setStaticF_Invalid)) ::Steamworks::DepotId_t  Invalid;

/// @brief Convert operator to "::System::IComparable_1<::Steamworks::DepotId_t>"
constexpr operator  ::System::IComparable_1<::Steamworks::DepotId_t>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::DepotId_t>"
constexpr operator  ::System::IEquatable_1<::Steamworks::DepotId_t>*() ;

/// @brief Method CompareTo, addr 0x1805a8250, size 0x20, virtual true, abstract: false, final true
inline int32_t CompareTo(::Steamworks::DepotId_t  other) ;

/// @brief Method Equals, addr 0x1805a82e0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::Steamworks::DepotId_t  other) ;

/// @brief Method Equals, addr 0x1805a9380, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode, addr 0x1805a8300, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x1805a8320, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint32_t  value) ;

static inline ::Steamworks::DepotId_t getStaticF_Invalid() ;

/// @brief Convert to "::System::IComparable_1<::Steamworks::DepotId_t>"
constexpr ::System::IComparable_1<::Steamworks::DepotId_t>* i___System__IComparable_1___Steamworks__DepotId_t_() ;

/// @brief Convert to "::System::IEquatable_1<::Steamworks::DepotId_t>"
constexpr ::System::IEquatable_1<::Steamworks::DepotId_t>* i___System__IEquatable_1___Steamworks__DepotId_t_() ;

/// @brief Method op_Equality, addr 0x1805a8340, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::Steamworks::DepotId_t  x, ::Steamworks::DepotId_t  y) ;

/// @brief Method op_Explicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline ::Steamworks::DepotId_t op_Explicit___Steamworks__DepotId_t(uint32_t  value) ;

/// @brief Method op_Explicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline uint32_t op_Explicit_uint32_t(::Steamworks::DepotId_t  that) ;

/// @brief Method op_Inequality, addr 0x1805a8350, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::Steamworks::DepotId_t  x, ::Steamworks::DepotId_t  y) ;

static inline void setStaticF_Invalid(::Steamworks::DepotId_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DepotId_t() ;

// Ctor Parameters [CppParam { name: "m_DepotId", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr DepotId_t(uint32_t  m_DepotId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16453};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_DepotId, offset: 0x0, size: 0x4, def value: None
 uint32_t  m_DepotId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::DepotId_t, m_DepotId) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::DepotId_t) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
