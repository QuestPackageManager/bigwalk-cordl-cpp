#pragma once
// IWYU pragma private; include "Rewired/ControllerMapSaveData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerMapSaveData)
namespace Rewired {
class ControllerMap;
}
namespace Rewired {
struct ControllerType;
}
namespace Rewired {
class Controller;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Rewired {
class ControllerMapSaveData;
}
// Write type traits
MARK_REF_T(::Rewired::ControllerMapSaveData*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerMapSaveData*, "Rewired", "ControllerMapSaveData");
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerMapSaveData
class CORDL_TYPE ControllerMapSaveData : public ::System::Object {
public:
// Declarations
/// @brief Field YPDhKrkxqVIfoGNDQfOlHnsClddbA, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_YPDhKrkxqVIfoGNDQfOlHnsClddbA, put=__cordl_internal_set_YPDhKrkxqVIfoGNDQfOlHnsClddbA)) int32_t  YPDhKrkxqVIfoGNDQfOlHnsClddbA;

/// @brief Field _controller, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::Rewired::Controller*  _controller;

/// @brief Field _map, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__map, put=__cordl_internal_set__map)) ::Rewired::ControllerMap*  _map;

 __declspec(property(get=get_categoryId)) int32_t  categoryId;

 __declspec(property(get=get_controller)) ::Rewired::Controller*  controller;

 __declspec(property(get=get_controllerHardwareIdentifier)) ::StringW  controllerHardwareIdentifier;

 __declspec(property(get=get_controllerType)) ::Rewired::ControllerType  controllerType;

 __declspec(property(get=get_layoutId)) int32_t  layoutId;

 __declspec(property(get=get_map)) ::Rewired::ControllerMap*  map;

 __declspec(property(get=get_mapType)) ::System::Type*  mapType;

 __declspec(property(get=get_mapTypeString)) ::StringW  mapTypeString;

/// @brief Method GetMap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetMap() ;

/// @brief Method JYDdmddxhOWomTeRfZKiLpnSyrze, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename >
static inline  JYDdmddxhOWomTeRfZKiLpnSyrze(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method JYDdmddxhOWomTeRfZKiLpnSyrze, addr 0x1819881b0, size 0x220, virtual false, abstract: false, final false
static inline ::Rewired::ControllerMapSaveData* JYDdmddxhOWomTeRfZKiLpnSyrze(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::Rewired::ControllerMapSaveData* New_ctor(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr int32_t const& __cordl_internal_get_YPDhKrkxqVIfoGNDQfOlHnsClddbA() const;

constexpr int32_t& __cordl_internal_get_YPDhKrkxqVIfoGNDQfOlHnsClddbA() ;

constexpr ::Rewired::Controller* const& __cordl_internal_get__controller() const;

constexpr ::Rewired::Controller*& __cordl_internal_get__controller() ;

constexpr ::Rewired::ControllerMap* const& __cordl_internal_get__map() const;

constexpr ::Rewired::ControllerMap*& __cordl_internal_get__map() ;

constexpr void __cordl_internal_set_YPDhKrkxqVIfoGNDQfOlHnsClddbA(int32_t  value) ;

constexpr void __cordl_internal_set__controller(::Rewired::Controller*  value) ;

constexpr void __cordl_internal_set__map(::Rewired::ControllerMap*  value) ;

/// @brief Method .ctor, addr 0x1819883d0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_categoryId, addr 0x181988450, size 0x90, virtual false, abstract: false, final false
inline int32_t get_categoryId() ;

/// @brief Method get_controller, addr 0x1819885d0, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::Controller* get_controller() ;

/// @brief Method get_controllerHardwareIdentifier, addr 0x1819884e0, size 0x80, virtual false, abstract: false, final false
inline ::StringW get_controllerHardwareIdentifier() ;

/// @brief Method get_controllerType, addr 0x181988560, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::ControllerType get_controllerType() ;

/// @brief Method get_layoutId, addr 0x181988630, size 0x90, virtual false, abstract: false, final false
inline int32_t get_layoutId() ;

/// @brief Method get_map, addr 0x1819887b0, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::ControllerMap* get_map() ;

/// @brief Method get_mapType, addr 0x181988740, size 0x70, virtual false, abstract: false, final false
inline ::System::Type* get_mapType() ;

/// @brief Method get_mapTypeString, addr 0x1819886c0, size 0x80, virtual false, abstract: false, final false
inline ::StringW get_mapTypeString() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerMapSaveData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerMapSaveData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerMapSaveData(ControllerMapSaveData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerMapSaveData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerMapSaveData(ControllerMapSaveData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2044};

/// @brief Field _controller, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Controller*  ____controller;

/// @brief Field _map, offset: 0x18, size: 0x8, def value: None
 ::Rewired::ControllerMap*  ____map;

/// @brief Field YPDhKrkxqVIfoGNDQfOlHnsClddbA, offset: 0x20, size: 0x4, def value: None
 int32_t  ___YPDhKrkxqVIfoGNDQfOlHnsClddbA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerMapSaveData, ____controller) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMapSaveData, ____map) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMapSaveData, ___YPDhKrkxqVIfoGNDQfOlHnsClddbA) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerMapSaveData) == 0x28, "Size mismatch!");

} // namespace end def Rewired
