#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IAxisCalibrationIndexMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IAxisCalibrationIndexMap)
// Forward declare root types
namespace Rewired::Interfaces {
class IAxisCalibrationIndexMap;
}
// Write type traits
MARK_REF_T(::Rewired::Interfaces::IAxisCalibrationIndexMap*);
DEFINE_IL2CPP_CLASS(::Rewired::Interfaces::IAxisCalibrationIndexMap*, "Rewired.Interfaces", "IAxisCalibrationIndexMap");
// Dependencies 
namespace Rewired::Interfaces {
// Is value type: false
// CS Name: Rewired.Interfaces.IAxisCalibrationIndexMap
class CORDL_TYPE IAxisCalibrationIndexMap {
public:
// Declarations
/// @brief Method GetMappedAxisIndex, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetMappedAxisIndex(int32_t  axisIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "IAxisCalibrationIndexMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAxisCalibrationIndexMap(IAxisCalibrationIndexMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2249};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Interfaces
