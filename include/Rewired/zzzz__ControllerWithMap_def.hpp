#pragma once
// IWYU pragma private; include "Rewired/ControllerWithMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__Controller_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerWithMap)
namespace Rewired {
class ControllerDataUpdater;
}
namespace Rewired {
struct ControllerType;
}
namespace Rewired {
class Controller_Extension;
}
namespace Rewired {
class HardwareControllerMap_Game;
}
namespace Rewired {
struct InputSource;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace Rewired {
class ControllerWithMap;
}
// Write type traits
MARK_REF_T(::Rewired::ControllerWithMap*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerWithMap*, "Rewired", "ControllerWithMap");
// Dependencies Rewired.Controller
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerWithMap
class CORDL_TYPE ControllerWithMap : public ::Rewired::Controller {
public:
// Declarations
static inline ::Rewired::ControllerWithMap* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, ::StringW  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_5, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<bool>  _cordl_fixed_empty_name_whitespace_param_8, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_9, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_10, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_11) ;

/// @brief Method .ctor, addr 0x181852170, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, ::StringW  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_5, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<bool>  _cordl_fixed_empty_name_whitespace_param_8, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_9, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_10, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_11) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerWithMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerWithMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerWithMap(ControllerWithMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerWithMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerWithMap(ControllerWithMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1837};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ControllerWithMap) == 0x130, "Size mismatch!");

} // namespace end def Rewired
