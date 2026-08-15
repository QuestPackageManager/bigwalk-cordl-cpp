#pragma once
// IWYU pragma private; include "Steamworks/SteamInputActionEvent_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__ESteamInputActionEventType_def.hpp"
#include "Steamworks/zzzz__InputAnalogActionData_t_def.hpp"
#include "Steamworks/zzzz__InputAnalogActionHandle_t_def.hpp"
#include "Steamworks/zzzz__InputDigitalActionData_t_def.hpp"
#include "Steamworks/zzzz__InputDigitalActionHandle_t_def.hpp"
#include "Steamworks/zzzz__InputHandle_t_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SteamInputActionEvent_t)
namespace Steamworks {
struct SteamInputActionEvent_t_AnalogAction_t;
}
namespace Steamworks {
struct SteamInputActionEvent_t_DigitalAction_t;
}
namespace Steamworks {
struct SteamInputActionEvent_t_OptionValue;
}
// Forward declare root types
namespace Steamworks {
struct SteamInputActionEvent_t;
}
namespace Steamworks {
struct SteamInputActionEvent_t_AnalogAction_t;
}
namespace Steamworks {
struct SteamInputActionEvent_t_DigitalAction_t;
}
namespace Steamworks {
struct SteamInputActionEvent_t_OptionValue;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamInputActionEvent_t);
MARK_VAL_T(::Steamworks::SteamInputActionEvent_t_AnalogAction_t);
MARK_VAL_T(::Steamworks::SteamInputActionEvent_t_DigitalAction_t);
MARK_VAL_T(::Steamworks::SteamInputActionEvent_t_OptionValue);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamInputActionEvent_t, "Steamworks", "SteamInputActionEvent_t");
DEFINE_IL2CPP_CLASS(::Steamworks::SteamInputActionEvent_t_AnalogAction_t, "Steamworks", "SteamInputActionEvent_t/AnalogAction_t");
DEFINE_IL2CPP_CLASS(::Steamworks::SteamInputActionEvent_t_DigitalAction_t, "Steamworks", "SteamInputActionEvent_t/DigitalAction_t");
DEFINE_IL2CPP_CLASS(::Steamworks::SteamInputActionEvent_t_OptionValue, "Steamworks", "SteamInputActionEvent_t/OptionValue");
// Dependencies Steamworks.InputAnalogActionData_t, Steamworks.InputAnalogActionHandle_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamInputActionEvent_t/AnalogAction_t
struct CORDL_TYPE SteamInputActionEvent_t_AnalogAction_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SteamInputActionEvent_t_AnalogAction_t() ;

// Ctor Parameters [CppParam { name: "actionHandle", ty: "::Steamworks::InputAnalogActionHandle_t", modifiers: "", def_value: None }, CppParam { name: "analogActionData", ty: "::Steamworks::InputAnalogActionData_t", modifiers: "", def_value: None }]
constexpr SteamInputActionEvent_t_AnalogAction_t(::Steamworks::InputAnalogActionHandle_t  actionHandle, ::Steamworks::InputAnalogActionData_t  analogActionData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16419};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field actionHandle, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::InputAnalogActionHandle_t  actionHandle;

/// @brief Field analogActionData, offset: 0x8, size: 0xd, def value: None
 ::Steamworks::InputAnalogActionData_t  analogActionData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamInputActionEvent_t_AnalogAction_t, actionHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamInputActionEvent_t_AnalogAction_t, analogActionData) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamInputActionEvent_t_AnalogAction_t) == 0x18, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies Steamworks.InputDigitalActionData_t, Steamworks.InputDigitalActionHandle_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamInputActionEvent_t/DigitalAction_t
struct CORDL_TYPE SteamInputActionEvent_t_DigitalAction_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SteamInputActionEvent_t_DigitalAction_t() ;

// Ctor Parameters [CppParam { name: "actionHandle", ty: "::Steamworks::InputDigitalActionHandle_t", modifiers: "", def_value: None }, CppParam { name: "digitalActionData", ty: "::Steamworks::InputDigitalActionData_t", modifiers: "", def_value: None }]
constexpr SteamInputActionEvent_t_DigitalAction_t(::Steamworks::InputDigitalActionHandle_t  actionHandle, ::Steamworks::InputDigitalActionData_t  digitalActionData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16420};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field actionHandle, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::InputDigitalActionHandle_t  actionHandle;

/// @brief Field digitalActionData, offset: 0x8, size: 0x2, def value: None
 ::Steamworks::InputDigitalActionData_t  digitalActionData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamInputActionEvent_t_DigitalAction_t, actionHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamInputActionEvent_t_DigitalAction_t, digitalActionData) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamInputActionEvent_t_DigitalAction_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies Steamworks.SteamInputActionEvent_t::AnalogAction_t, Steamworks.SteamInputActionEvent_t::DigitalAction_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamInputActionEvent_t/OptionValue
struct CORDL_TYPE SteamInputActionEvent_t_OptionValue {
public:
// Declarations
/// @brief Field analogAction, offset 0x0, size 0x18 
 __declspec(property(get=__cordl_internal_get_analogAction, put=__cordl_internal_set_analogAction)) ::Steamworks::SteamInputActionEvent_t_AnalogAction_t  analogAction;

/// @brief Field digitalAction, offset 0x0, size 0x10 
 __declspec(property(get=__cordl_internal_get_digitalAction, put=__cordl_internal_set_digitalAction)) ::Steamworks::SteamInputActionEvent_t_DigitalAction_t  digitalAction;

constexpr ::Steamworks::SteamInputActionEvent_t_AnalogAction_t const& __cordl_internal_get_analogAction() const;

constexpr ::Steamworks::SteamInputActionEvent_t_AnalogAction_t& __cordl_internal_get_analogAction() ;

constexpr ::Steamworks::SteamInputActionEvent_t_DigitalAction_t const& __cordl_internal_get_digitalAction() const;

constexpr ::Steamworks::SteamInputActionEvent_t_DigitalAction_t& __cordl_internal_get_digitalAction() ;

constexpr void __cordl_internal_set_analogAction(::Steamworks::SteamInputActionEvent_t_AnalogAction_t  value) ;

constexpr void __cordl_internal_set_digitalAction(::Steamworks::SteamInputActionEvent_t_DigitalAction_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SteamInputActionEvent_t_OptionValue() ;

// Ctor Parameters [CppParam { name: "analogAction", ty: "::Steamworks::SteamInputActionEvent_t_AnalogAction_t", modifiers: "", def_value: None }, CppParam { name: "digitalAction", ty: "::Steamworks::SteamInputActionEvent_t_DigitalAction_t", modifiers: "", def_value: None }]
constexpr SteamInputActionEvent_t_OptionValue(::Steamworks::SteamInputActionEvent_t_AnalogAction_t  analogAction, ::Steamworks::SteamInputActionEvent_t_DigitalAction_t  digitalAction) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___analogAction_padding[0x0];
/// @brief Field analogAction, offset: 0x0, size: 0x18, def value: None
 ::Steamworks::SteamInputActionEvent_t_AnalogAction_t  ___analogAction;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___analogAction_padding_forAlignment[0x0];
/// @brief Field analogAction, offset: 0x0, size: 0x18, def value: None
 ::Steamworks::SteamInputActionEvent_t_AnalogAction_t  ___analogAction_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___digitalAction_padding[0x0];
/// @brief Field digitalAction, offset: 0x0, size: 0x10, def value: None
 ::Steamworks::SteamInputActionEvent_t_DigitalAction_t  ___digitalAction;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___digitalAction_padding_forAlignment[0x0];
/// @brief Field digitalAction, offset: 0x0, size: 0x10, def value: None
 ::Steamworks::SteamInputActionEvent_t_DigitalAction_t  ___digitalAction_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16421};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamInputActionEvent_t_OptionValue) == 0x18, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies Steamworks.ESteamInputActionEventType, Steamworks.InputHandle_t, Steamworks.SteamInputActionEvent_t::OptionValue
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamInputActionEvent_t
struct CORDL_TYPE SteamInputActionEvent_t {
public:
// Declarations
using AnalogAction_t = ::Steamworks::SteamInputActionEvent_t_AnalogAction_t;

using DigitalAction_t = ::Steamworks::SteamInputActionEvent_t_DigitalAction_t;

using OptionValue = ::Steamworks::SteamInputActionEvent_t_OptionValue;

// Ctor Parameters []
// @brief default ctor
constexpr SteamInputActionEvent_t() ;

// Ctor Parameters [CppParam { name: "controllerHandle", ty: "::Steamworks::InputHandle_t", modifiers: "", def_value: None }, CppParam { name: "eEventType", ty: "::Steamworks::ESteamInputActionEventType", modifiers: "", def_value: None }, CppParam { name: "m_val", ty: "::Steamworks::SteamInputActionEvent_t_OptionValue", modifiers: "", def_value: None }]
constexpr SteamInputActionEvent_t(::Steamworks::InputHandle_t  controllerHandle, ::Steamworks::ESteamInputActionEventType  eEventType, ::Steamworks::SteamInputActionEvent_t_OptionValue  m_val) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16422};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field controllerHandle, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::InputHandle_t  controllerHandle;

/// @brief Field eEventType, offset: 0x8, size: 0x4, def value: None
 ::Steamworks::ESteamInputActionEventType  eEventType;

/// @brief Field m_val, offset: 0x10, size: 0x18, def value: None
 ::Steamworks::SteamInputActionEvent_t_OptionValue  m_val;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamInputActionEvent_t, controllerHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamInputActionEvent_t, eEventType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamInputActionEvent_t, m_val) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamInputActionEvent_t) == 0x28, "Size mismatch!");

} // namespace end def Steamworks
