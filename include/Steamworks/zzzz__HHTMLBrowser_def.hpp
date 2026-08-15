#pragma once
// IWYU pragma private; include "Steamworks/HHTMLBrowser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HHTMLBrowser)
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
struct HHTMLBrowser;
}
// Write type traits
MARK_VAL_T(::Steamworks::HHTMLBrowser);
DEFINE_IL2CPP_CLASS(::Steamworks::HHTMLBrowser, "Steamworks", "HHTMLBrowser");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.HHTMLBrowser
struct CORDL_TYPE HHTMLBrowser {
public:
// Declarations
/// @brief Field Invalid, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Invalid, put=setStaticF_Invalid)) ::Steamworks::HHTMLBrowser  Invalid;

/// @brief Convert operator to "::System::IComparable_1<::Steamworks::HHTMLBrowser>"
constexpr operator  ::System::IComparable_1<::Steamworks::HHTMLBrowser>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::HHTMLBrowser>"
constexpr operator  ::System::IEquatable_1<::Steamworks::HHTMLBrowser>*() ;

/// @brief Method CompareTo, addr 0x1805a8250, size 0x20, virtual true, abstract: false, final true
inline int32_t CompareTo(::Steamworks::HHTMLBrowser  other) ;

/// @brief Method Equals, addr 0x1805a82e0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::Steamworks::HHTMLBrowser  other) ;

/// @brief Method Equals, addr 0x1805a9ec0, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode, addr 0x1805a8300, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x1805a8320, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint32_t  value) ;

static inline ::Steamworks::HHTMLBrowser getStaticF_Invalid() ;

/// @brief Convert to "::System::IComparable_1<::Steamworks::HHTMLBrowser>"
constexpr ::System::IComparable_1<::Steamworks::HHTMLBrowser>* i___System__IComparable_1___Steamworks__HHTMLBrowser_() ;

/// @brief Convert to "::System::IEquatable_1<::Steamworks::HHTMLBrowser>"
constexpr ::System::IEquatable_1<::Steamworks::HHTMLBrowser>* i___System__IEquatable_1___Steamworks__HHTMLBrowser_() ;

/// @brief Method op_Equality, addr 0x1805a8340, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::Steamworks::HHTMLBrowser  x, ::Steamworks::HHTMLBrowser  y) ;

/// @brief Method op_Explicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline ::Steamworks::HHTMLBrowser op_Explicit___Steamworks__HHTMLBrowser(uint32_t  value) ;

/// @brief Method op_Explicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline uint32_t op_Explicit_uint32_t(::Steamworks::HHTMLBrowser  that) ;

/// @brief Method op_Inequality, addr 0x1805a8350, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::Steamworks::HHTMLBrowser  x, ::Steamworks::HHTMLBrowser  y) ;

static inline void setStaticF_Invalid(::Steamworks::HHTMLBrowser  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr HHTMLBrowser() ;

// Ctor Parameters [CppParam { name: "m_HHTMLBrowser", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr HHTMLBrowser(uint32_t  m_HHTMLBrowser) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16411};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_HHTMLBrowser, offset: 0x0, size: 0x4, def value: None
 uint32_t  m_HHTMLBrowser;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::HHTMLBrowser, m_HHTMLBrowser) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::HHTMLBrowser) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
