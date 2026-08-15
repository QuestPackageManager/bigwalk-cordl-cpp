#pragma once
// IWYU pragma private; include "Steamworks/servernetadr_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(servernetadr_t)
namespace System {
class Object;
}
// Forward declare root types
namespace Steamworks {
struct servernetadr_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::servernetadr_t);
DEFINE_IL2CPP_CLASS(::Steamworks::servernetadr_t, "Steamworks", "servernetadr_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.servernetadr_t
struct CORDL_TYPE servernetadr_t {
public:
// Declarations
/// @brief Method CompareTo, addr 0x1805c2ac0, size 0x80, virtual false, abstract: false, final false
inline int32_t CompareTo(::Steamworks::servernetadr_t  other) ;

/// @brief Method Equals, addr 0x1805c2b40, size 0x30, virtual false, abstract: false, final false
inline bool Equals(::Steamworks::servernetadr_t  other) ;

/// @brief Method Equals, addr 0x1805c2b70, size 0xa0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetConnectionAddressString, addr 0x1805c2c10, size 0x20, virtual false, abstract: false, final false
inline ::StringW GetConnectionAddressString() ;

/// @brief Method GetConnectionPort, addr 0x18052ca80, size 0x10, virtual false, abstract: false, final false
inline uint16_t GetConnectionPort() ;

/// @brief Method GetHashCode, addr 0x1805c2c30, size 0x60, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetIP, addr 0x18038fe90, size 0x10, virtual false, abstract: false, final false
inline uint32_t GetIP() ;

/// @brief Method GetQueryAddressString, addr 0x1805c2c90, size 0x20, virtual false, abstract: false, final false
inline ::StringW GetQueryAddressString() ;

/// @brief Method GetQueryPort, addr 0x18052ca70, size 0x10, virtual false, abstract: false, final false
inline uint16_t GetQueryPort() ;

/// @brief Method Init, addr 0x1805c2cb0, size 0x30, virtual false, abstract: false, final false
inline void Init(uint32_t  ip, uint16_t  usQueryPort, uint16_t  usConnectionPort) ;

/// @brief Method SetConnectionPort, addr 0x18052caa0, size 0x10, virtual false, abstract: false, final false
inline void SetConnectionPort(uint16_t  usPort) ;

/// @brief Method SetIP, addr 0x1803bda60, size 0x10, virtual false, abstract: false, final false
inline void SetIP(uint32_t  unIP) ;

/// @brief Method SetQueryPort, addr 0x18052ca90, size 0x10, virtual false, abstract: false, final false
inline void SetQueryPort(uint16_t  usPort) ;

/// @brief Method ToString, addr 0x1805c2ce0, size 0x140, virtual false, abstract: false, final false
static inline ::StringW ToString(uint32_t  unIP, uint16_t  usPort) ;

/// @brief Method op_Equality, addr 0x1805c2e20, size 0x40, virtual false, abstract: false, final false
static inline bool op_Equality(::Steamworks::servernetadr_t  x, ::Steamworks::servernetadr_t  y) ;

/// @brief Method op_GreaterThan, addr 0x1805c2e60, size 0x40, virtual false, abstract: false, final false
static inline bool op_GreaterThan(::Steamworks::servernetadr_t  x, ::Steamworks::servernetadr_t  y) ;

/// @brief Method op_Inequality, addr 0x1805c2ea0, size 0x40, virtual false, abstract: false, final false
static inline bool op_Inequality(::Steamworks::servernetadr_t  x, ::Steamworks::servernetadr_t  y) ;

/// @brief Method op_LessThan, addr 0x1805c2ee0, size 0x40, virtual false, abstract: false, final false
static inline bool op_LessThan(::Steamworks::servernetadr_t  x, ::Steamworks::servernetadr_t  y) ;

// Ctor Parameters []
// @brief default ctor
constexpr servernetadr_t() ;

// Ctor Parameters [CppParam { name: "m_usConnectionPort", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_usQueryPort", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_unIP", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr servernetadr_t(uint16_t  m_usConnectionPort, uint16_t  m_usQueryPort, uint32_t  m_unIP) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16398};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_usConnectionPort, offset: 0x0, size: 0x2, def value: None
 uint16_t  m_usConnectionPort;

/// @brief Field m_usQueryPort, offset: 0x2, size: 0x2, def value: None
 uint16_t  m_usQueryPort;

/// @brief Field m_unIP, offset: 0x4, size: 0x4, def value: None
 uint32_t  m_unIP;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::servernetadr_t, m_usConnectionPort) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::servernetadr_t, m_usQueryPort) == 0x2, "Offset mismatch!");

static_assert(offsetof(::Steamworks::servernetadr_t, m_unIP) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::servernetadr_t) == 0x8, "Size mismatch!");

} // namespace end def Steamworks
