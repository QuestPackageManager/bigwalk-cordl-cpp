#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/HardwareButtonInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HardwareButtonInfo)
namespace Rewired::Utils::Interfaces {
class IDeepCloneable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Data::Mapping {
class HardwareButtonInfo;
}
// Write type traits
MARK_REF_T(::Rewired::Data::Mapping::HardwareButtonInfo*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::HardwareButtonInfo*, "Rewired.Data.Mapping", "HardwareButtonInfo");
// Dependencies System.Object
namespace Rewired::Data::Mapping {
// Is value type: false
// CS Name: Rewired.Data.Mapping.HardwareButtonInfo
class CORDL_TYPE HardwareButtonInfo : public ::System::Object {
public:
// Declarations
/// @brief Field _excludeFromPolling, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__excludeFromPolling, put=__cordl_internal_set__excludeFromPolling)) bool  _excludeFromPolling;

/// @brief Field _isPressureSensitive, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get__isPressureSensitive, put=__cordl_internal_set__isPressureSensitive)) bool  _isPressureSensitive;

 __declspec(property(get=get_excludeFromPolling)) bool  excludeFromPolling;

 __declspec(property(get=get_isPressureSensitive)) bool  isPressureSensitive;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr operator  ::Rewired::Utils::Interfaces::IDeepCloneable*() noexcept;

/// @brief Method DeepClone, addr 0x1818d0cf0, size 0x30, virtual true, abstract: false, final true
inline ::System::Object* DeepClone() ;

static inline ::Rewired::Data::Mapping::HardwareButtonInfo* New_ctor() ;

static inline ::Rewired::Data::Mapping::HardwareButtonInfo* New_ctor(bool  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr bool const& __cordl_internal_get__excludeFromPolling() const;

constexpr bool& __cordl_internal_get__excludeFromPolling() ;

constexpr bool const& __cordl_internal_get__isPressureSensitive() const;

constexpr bool& __cordl_internal_get__isPressureSensitive() ;

constexpr void __cordl_internal_set__excludeFromPolling(bool  value) ;

constexpr void __cordl_internal_set__isPressureSensitive(bool  value) ;

/// @brief Method .ctor, addr 0x18188a800, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1815c5170, size 0x10, virtual false, abstract: false, final false
inline void _ctor(bool  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_excludeFromPolling, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_excludeFromPolling() ;

/// @brief Method get_isPressureSensitive, addr 0x180503b10, size 0x10, virtual false, abstract: false, final false
inline bool get_isPressureSensitive() ;

/// @brief Convert to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr ::Rewired::Utils::Interfaces::IDeepCloneable* i___Rewired__Utils__Interfaces__IDeepCloneable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HardwareButtonInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HardwareButtonInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HardwareButtonInfo(HardwareButtonInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HardwareButtonInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HardwareButtonInfo(HardwareButtonInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2665};

/// @brief Field _excludeFromPolling, offset: 0x10, size: 0x1, def value: None
 bool  ____excludeFromPolling;

/// @brief Field _isPressureSensitive, offset: 0x11, size: 0x1, def value: None
 bool  ____isPressureSensitive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::HardwareButtonInfo, ____excludeFromPolling) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareButtonInfo, ____isPressureSensitive) == 0x11, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::HardwareButtonInfo) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
