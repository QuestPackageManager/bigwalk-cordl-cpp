#pragma once
// IWYU pragma private; include "Steamworks/AccountID_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AccountID_t)
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
struct AccountID_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::AccountID_t);
DEFINE_IL2CPP_CLASS(::Steamworks::AccountID_t, "Steamworks", "AccountID_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.AccountID_t
struct CORDL_TYPE AccountID_t {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable_1<::Steamworks::AccountID_t>"
constexpr operator  ::System::IComparable_1<::Steamworks::AccountID_t>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::AccountID_t>"
constexpr operator  ::System::IEquatable_1<::Steamworks::AccountID_t>*() ;

/// @brief Method CompareTo, addr 0x1805a8250, size 0x20, virtual true, abstract: false, final true
inline int32_t CompareTo(::Steamworks::AccountID_t  other) ;

/// @brief Method Equals, addr 0x1805a82e0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::Steamworks::AccountID_t  other) ;

/// @brief Method Equals, addr 0x1805a8270, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode, addr 0x1805a8300, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x1805a8320, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint32_t  value) ;

/// @brief Convert to "::System::IComparable_1<::Steamworks::AccountID_t>"
constexpr ::System::IComparable_1<::Steamworks::AccountID_t>* i___System__IComparable_1___Steamworks__AccountID_t_() ;

/// @brief Convert to "::System::IEquatable_1<::Steamworks::AccountID_t>"
constexpr ::System::IEquatable_1<::Steamworks::AccountID_t>* i___System__IEquatable_1___Steamworks__AccountID_t_() ;

/// @brief Method op_Equality, addr 0x1805a8340, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::Steamworks::AccountID_t  x, ::Steamworks::AccountID_t  y) ;

/// @brief Method op_Explicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline ::Steamworks::AccountID_t op_Explicit___Steamworks__AccountID_t(uint32_t  value) ;

/// @brief Method op_Explicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline uint32_t op_Explicit_uint32_t(::Steamworks::AccountID_t  that) ;

/// @brief Method op_Inequality, addr 0x1805a8350, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::Steamworks::AccountID_t  x, ::Steamworks::AccountID_t  y) ;

// Ctor Parameters []
// @brief default ctor
constexpr AccountID_t() ;

// Ctor Parameters [CppParam { name: "m_AccountID", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr AccountID_t(uint32_t  m_AccountID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16451};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_AccountID, offset: 0x0, size: 0x4, def value: None
 uint32_t  m_AccountID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::AccountID_t, m_AccountID) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::AccountID_t) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
