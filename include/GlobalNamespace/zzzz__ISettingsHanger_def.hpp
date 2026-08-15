#pragma once
// IWYU pragma private; include "GlobalNamespace/ISettingsHanger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ISettingsHanger)
namespace GlobalNamespace {
struct SettingsType;
}
// Forward declare root types
namespace GlobalNamespace {
class ISettingsHanger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ISettingsHanger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ISettingsHanger*, "", "ISettingsHanger");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: ISettingsHanger
class CORDL_TYPE ISettingsHanger {
public:
// Declarations
 __declspec(property(get=get_settingsType, put=set_settingsType)) ::GlobalNamespace::SettingsType  settingsType;

 __declspec(property(get=get_value, put=set_value)) int32_t  value;

 __declspec(property(get=get_valueIndex, put=set_valueIndex)) int32_t  valueIndex;

/// @brief Method Cycle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Cycle(int32_t  delta) ;

/// @brief Method IsAtMaxValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool IsAtMaxValue() ;

/// @brief Method IsAtMinValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool IsAtMinValue() ;

/// @brief Method Load, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Load() ;

/// @brief Method ResetToDefault, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ResetToDefault() ;

/// @brief Method Save, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Save() ;

/// @brief Method SetValueByIndex, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetValueByIndex(int32_t  valueIndex) ;

/// @brief Method get_settingsType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::GlobalNamespace::SettingsType get_settingsType() ;

/// @brief Method get_value, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_value() ;

/// @brief Method get_valueIndex, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_valueIndex() ;

/// @brief Method set_settingsType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_settingsType(::GlobalNamespace::SettingsType  value) ;

/// @brief Method set_value, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_value(int32_t  value) ;

/// @brief Method set_valueIndex, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_valueIndex(int32_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ISettingsHanger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISettingsHanger(ISettingsHanger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5608};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
