#pragma once
// IWYU pragma private; include "Rewired/EnumConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnumConverter)
namespace Rewired::Config {
struct ThrottleCalibrationMode;
}
namespace Rewired::Config {
struct UpdateLoopSetting;
}
namespace Rewired::Data::Mapping {
struct AlternateAxisCalibrationType;
}
namespace Rewired {
struct UpdateLoopType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Rewired {
class EnumConverter;
}
// Write type traits
MARK_REF_T(::Rewired::EnumConverter*);
DEFINE_IL2CPP_CLASS(::Rewired::EnumConverter*, "Rewired", "EnumConverter");
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.EnumConverter
class CORDL_TYPE EnumConverter : public ::System::Object {
public:
// Declarations
/// @brief Method ToAlternateAxisCalibrationType, addr 0x1818430e0, size 0x30, virtual false, abstract: false, final false
static inline ::Rewired::Data::Mapping::AlternateAxisCalibrationType ToAlternateAxisCalibrationType(::Rewired::Config::ThrottleCalibrationMode  throttleCalibrationMode) ;

/// @brief Method ToUpdateLoopTypes, addr 0x181843110, size 0x110, virtual false, abstract: false, final false
static inline int32_t ToUpdateLoopTypes(::Rewired::Config::UpdateLoopSetting  updateLoopSetting, ::System::Collections::Generic::List_1<::Rewired::UpdateLoopType>*  results) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumConverter(EnumConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumConverter(EnumConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1806};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::EnumConverter) == 0x10, "Size mismatch!");

} // namespace end def Rewired
