#pragma once
// IWYU pragma private; include "Steamworks/HAuthTicket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAuthTicket)
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
struct HAuthTicket;
}
// Write type traits
MARK_VAL_T(::Steamworks::HAuthTicket);
DEFINE_IL2CPP_CLASS(::Steamworks::HAuthTicket, "Steamworks", "HAuthTicket");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.HAuthTicket
struct CORDL_TYPE HAuthTicket {
public:
// Declarations
/// @brief Field Invalid, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Invalid, put=setStaticF_Invalid)) ::Steamworks::HAuthTicket  Invalid;

/// @brief Convert operator to "::System::IComparable_1<::Steamworks::HAuthTicket>"
constexpr operator  ::System::IComparable_1<::Steamworks::HAuthTicket>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::HAuthTicket>"
constexpr operator  ::System::IEquatable_1<::Steamworks::HAuthTicket>*() ;

/// @brief Method CompareTo, addr 0x1805a8250, size 0x20, virtual true, abstract: false, final true
inline int32_t CompareTo(::Steamworks::HAuthTicket  other) ;

/// @brief Method Equals, addr 0x1805a82e0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::Steamworks::HAuthTicket  other) ;

/// @brief Method Equals, addr 0x1805a9e20, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode, addr 0x1805a8300, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x1805a8320, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint32_t  value) ;

static inline ::Steamworks::HAuthTicket getStaticF_Invalid() ;

/// @brief Convert to "::System::IComparable_1<::Steamworks::HAuthTicket>"
constexpr ::System::IComparable_1<::Steamworks::HAuthTicket>* i___System__IComparable_1___Steamworks__HAuthTicket_() ;

/// @brief Convert to "::System::IEquatable_1<::Steamworks::HAuthTicket>"
constexpr ::System::IEquatable_1<::Steamworks::HAuthTicket>* i___System__IEquatable_1___Steamworks__HAuthTicket_() ;

/// @brief Method op_Equality, addr 0x1805a8340, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::Steamworks::HAuthTicket  x, ::Steamworks::HAuthTicket  y) ;

/// @brief Method op_Explicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline ::Steamworks::HAuthTicket op_Explicit___Steamworks__HAuthTicket(uint32_t  value) ;

/// @brief Method op_Explicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline uint32_t op_Explicit_uint32_t(::Steamworks::HAuthTicket  that) ;

/// @brief Method op_Inequality, addr 0x1805a8350, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::Steamworks::HAuthTicket  x, ::Steamworks::HAuthTicket  y) ;

static inline void setStaticF_Invalid(::Steamworks::HAuthTicket  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr HAuthTicket() ;

// Ctor Parameters [CppParam { name: "m_HAuthTicket", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr HAuthTicket(uint32_t  m_HAuthTicket) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16404};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_HAuthTicket, offset: 0x0, size: 0x4, def value: None
 uint32_t  m_HAuthTicket;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::HAuthTicket, m_HAuthTicket) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::HAuthTicket) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
