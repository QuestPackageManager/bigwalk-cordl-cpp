#pragma once
// IWYU pragma private; include "Rewired/CustomControllerMapSaveData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerMapSaveData_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomControllerMapSaveData)
namespace Rewired {
class CustomControllerMap;
}
namespace Rewired {
class CustomController;
}
// Forward declare root types
namespace Rewired {
class CustomControllerMapSaveData;
}
// Write type traits
MARK_REF_T(::Rewired::CustomControllerMapSaveData*);
DEFINE_IL2CPP_CLASS(::Rewired::CustomControllerMapSaveData*, "Rewired", "CustomControllerMapSaveData");
// Dependencies Rewired.ControllerMapSaveData
namespace Rewired {
// Is value type: false
// CS Name: Rewired.CustomControllerMapSaveData
class CORDL_TYPE CustomControllerMapSaveData : public ::Rewired::ControllerMapSaveData {
public:
// Declarations
 __declspec(property(get=get_customController)) ::Rewired::CustomController*  customController;

 __declspec(property(get=get_customControllerMap)) ::Rewired::CustomControllerMap*  customControllerMap;

 __declspec(property(get=get_customControllerSourceId)) int32_t  customControllerSourceId;

static inline ::Rewired::CustomControllerMapSaveData* New_ctor(::Rewired::CustomController*  _cordl_fixed_empty_name_whitespace, ::Rewired::CustomControllerMap*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x181994ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Rewired::CustomController*  _cordl_fixed_empty_name_whitespace, ::Rewired::CustomControllerMap*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_customController, addr 0x181995120, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::CustomController* get_customController() ;

/// @brief Method get_customControllerMap, addr 0x181995000, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::CustomControllerMap* get_customControllerMap() ;

/// @brief Method get_customControllerSourceId, addr 0x181995070, size 0xb0, virtual false, abstract: false, final false
inline int32_t get_customControllerSourceId() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomControllerMapSaveData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomControllerMapSaveData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomControllerMapSaveData(CustomControllerMapSaveData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomControllerMapSaveData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomControllerMapSaveData(CustomControllerMapSaveData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2048};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::CustomControllerMapSaveData) == 0x28, "Size mismatch!");

} // namespace end def Rewired
