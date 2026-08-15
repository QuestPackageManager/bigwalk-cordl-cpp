#pragma once
// IWYU pragma private; include "Rewired/RewiredVersion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RewiredVersion)
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired {
struct RewiredVersion;
}
// Write type traits
MARK_VAL_T(::Rewired::RewiredVersion);
DEFINE_IL2CPP_CLASS(::Rewired::RewiredVersion, "Rewired", "RewiredVersion");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.RewiredVersion
struct CORDL_TYPE RewiredVersion {
public:
// Declarations
/// @brief Method Equals, addr 0x181846a60, size 0x180, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x181846be0, size 0xc0, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x181846ca0, size 0x130, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x181846e10, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181846dd0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, ::StringW  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method op_Equality, addr 0x181846f20, size 0xd0, virtual false, abstract: false, final false
static inline bool op_Equality(::Rewired::RewiredVersion  a, ::Rewired::RewiredVersion  b) ;

/// @brief Method op_GreaterThan, addr 0x181846ff0, size 0x140, virtual false, abstract: false, final false
static inline bool op_GreaterThan(::Rewired::RewiredVersion  a, ::Rewired::RewiredVersion  b) ;

/// @brief Method op_Inequality, addr 0x181847130, size 0x120, virtual false, abstract: false, final false
static inline bool op_Inequality(::Rewired::RewiredVersion  a, ::Rewired::RewiredVersion  b) ;

/// @brief Method op_LessThan, addr 0x181847250, size 0x1e0, virtual false, abstract: false, final false
static inline bool op_LessThan(::Rewired::RewiredVersion  a, ::Rewired::RewiredVersion  b) ;

// Ctor Parameters []
// @brief default ctor
constexpr RewiredVersion() ;

// Ctor Parameters [CppParam { name: "version1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "version2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "version3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "version4", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unityVersion", ty: "::StringW", modifiers: "", def_value: None }]
constexpr RewiredVersion(int32_t  version1, int32_t  version2, int32_t  version3, int32_t  version4, ::StringW  unityVersion) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1803};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field version1, offset: 0x0, size: 0x4, def value: None
 int32_t  version1;

/// @brief Field version2, offset: 0x4, size: 0x4, def value: None
 int32_t  version2;

/// @brief Field version3, offset: 0x8, size: 0x4, def value: None
 int32_t  version3;

/// @brief Field version4, offset: 0xc, size: 0x4, def value: None
 int32_t  version4;

/// @brief Field unityVersion, offset: 0x10, size: 0x8, def value: None
 ::StringW  unityVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::RewiredVersion, version1) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::RewiredVersion, version2) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Rewired::RewiredVersion, version3) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rewired::RewiredVersion, version4) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Rewired::RewiredVersion, unityVersion) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::RewiredVersion) == 0x18, "Size mismatch!");

} // namespace end def Rewired
