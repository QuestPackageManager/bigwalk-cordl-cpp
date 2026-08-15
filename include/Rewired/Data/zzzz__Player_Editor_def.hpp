#pragma once
// IWYU pragma private; include "Rewired/Data/Player_Editor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Player_Editor)
namespace GlobalNamespace {
class KksbZTwLuzLjTBgSfpIqbygtAeKo;
}
namespace GlobalNamespace {
class VFTLwPKGVkrbXCVYRAQBIVqcLpAO;
}
namespace GlobalNamespace {
class VqnzSQXAiGOZEXCaojnvdnhTOFrhb;
}
namespace Rewired::Data {
class Player_Editor_ControllerMapEnablerSettings;
}
namespace Rewired::Data {
class Player_Editor_ControllerMapLayoutManagerSettings;
}
namespace Rewired::Data {
class Player_Editor_CreateControllerInfo;
}
namespace Rewired::Data {
class Player_Editor_Mapping;
}
namespace Rewired::Data {
class Player_Editor_RuleSetMapping;
}
namespace Rewired::Utils::Interfaces {
class IDeepCloneable;
}
namespace Rewired {
class ControllerMapEnabler_BZumMxELvlwrHpCwgIyAmXeEeQBK;
}
namespace Rewired {
class ControllerMapLayoutManager_FOWeqvvrXTgrClqvTskzMNatLEZq;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Data {
class Player_Editor;
}
namespace Rewired::Data {
class Player_Editor_ControllerMapEnablerSettings;
}
namespace Rewired::Data {
class Player_Editor_ControllerMapLayoutManagerSettings;
}
namespace Rewired::Data {
class Player_Editor_CreateControllerInfo;
}
namespace Rewired::Data {
class Player_Editor_Mapping;
}
namespace Rewired::Data {
class Player_Editor_RuleSetMapping;
}
// Write type traits
MARK_REF_T(::Rewired::Data::Player_Editor*);
MARK_REF_T(::Rewired::Data::Player_Editor_ControllerMapEnablerSettings*);
MARK_REF_T(::Rewired::Data::Player_Editor_ControllerMapLayoutManagerSettings*);
MARK_REF_T(::Rewired::Data::Player_Editor_CreateControllerInfo*);
MARK_REF_T(::Rewired::Data::Player_Editor_Mapping*);
MARK_REF_T(::Rewired::Data::Player_Editor_RuleSetMapping*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Player_Editor*, "Rewired.Data", "Player_Editor");
DEFINE_IL2CPP_CLASS(::Rewired::Data::Player_Editor_ControllerMapEnablerSettings*, "Rewired.Data", "Player_Editor/ControllerMapEnablerSettings");
DEFINE_IL2CPP_CLASS(::Rewired::Data::Player_Editor_ControllerMapLayoutManagerSettings*, "Rewired.Data", "Player_Editor/ControllerMapLayoutManagerSettings");
DEFINE_IL2CPP_CLASS(::Rewired::Data::Player_Editor_CreateControllerInfo*, "Rewired.Data", "Player_Editor/CreateControllerInfo");
DEFINE_IL2CPP_CLASS(::Rewired::Data::Player_Editor_Mapping*, "Rewired.Data", "Player_Editor/Mapping");
DEFINE_IL2CPP_CLASS(::Rewired::Data::Player_Editor_RuleSetMapping*, "Rewired.Data", "Player_Editor/RuleSetMapping");
// Dependencies System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.Player_Editor/Mapping
class CORDL_TYPE Player_Editor_Mapping : public ::System::Object {
public:
// Declarations
/// @brief Field _categoryId, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__categoryId, put=__cordl_internal_set__categoryId)) int32_t  _categoryId;

/// @brief Field _enabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__enabled, put=__cordl_internal_set__enabled)) bool  _enabled;

/// @brief Field _layoutId, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__layoutId, put=__cordl_internal_set__layoutId)) int32_t  _layoutId;

 __declspec(property(get=get_categoryId, put=qnjSmEdzPsRyWLBAOiaBLIRXbIbY)) int32_t  categoryId;

 __declspec(property(get=get_enabled, put=KMCgewaAanAYRFScCeEwpJexSVJLA)) bool  enabled;

 __declspec(property(get=get_layoutId, put=eGuytZUpYaOanwJNOYvEMiGmJPqe)) int32_t  layoutId;

/// @brief Method Clear, addr 0x18188dc10, size 0x10, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Clone, addr 0x18188dc20, size 0x40, virtual false, abstract: false, final false
inline ::Rewired::Data::Player_Editor_Mapping* Clone() ;

/// @brief Method KMCgewaAanAYRFScCeEwpJexSVJLA, addr 0x1803924a0, size 0x10, virtual false, abstract: false, final false
inline void KMCgewaAanAYRFScCeEwpJexSVJLA(bool  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Data::Player_Editor_Mapping* New_ctor() ;

static inline ::Rewired::Data::Player_Editor_Mapping* New_ctor(bool  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

constexpr int32_t const& __cordl_internal_get__categoryId() const;

constexpr int32_t& __cordl_internal_get__categoryId() ;

constexpr bool const& __cordl_internal_get__enabled() const;

constexpr bool& __cordl_internal_get__enabled() ;

constexpr int32_t const& __cordl_internal_get__layoutId() const;

constexpr int32_t& __cordl_internal_get__layoutId() ;

constexpr void __cordl_internal_set__categoryId(int32_t  value) ;

constexpr void __cordl_internal_set__enabled(bool  value) ;

constexpr void __cordl_internal_set__layoutId(int32_t  value) ;

/// @brief Method .ctor, addr 0x18188dc10, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18188dc60, size 0x10, virtual false, abstract: false, final false
inline void _ctor(bool  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method eGuytZUpYaOanwJNOYvEMiGmJPqe, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void eGuytZUpYaOanwJNOYvEMiGmJPqe(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_categoryId, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_categoryId() ;

/// @brief Method get_enabled, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_layoutId, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_layoutId() ;

/// @brief Method qnjSmEdzPsRyWLBAOiaBLIRXbIbY, addr 0x1803924c0, size 0x10, virtual false, abstract: false, final false
inline void qnjSmEdzPsRyWLBAOiaBLIRXbIbY(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method skbsgeTkskNmketSeZgapkZFJsic, addr 0x18188dc70, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::VFTLwPKGVkrbXCVYRAQBIVqcLpAO* skbsgeTkskNmketSeZgapkZFJsic() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Player_Editor_Mapping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Player_Editor_Mapping", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Player_Editor_Mapping(Player_Editor_Mapping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Player_Editor_Mapping", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Player_Editor_Mapping(Player_Editor_Mapping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2347};

/// @brief Field _enabled, offset: 0x10, size: 0x1, def value: None
 bool  ____enabled;

/// @brief Field _categoryId, offset: 0x14, size: 0x4, def value: None
 int32_t  ____categoryId;

/// @brief Field _layoutId, offset: 0x18, size: 0x4, def value: None
 int32_t  ____layoutId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Player_Editor_Mapping, ____enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Player_Editor_Mapping, ____categoryId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Player_Editor_Mapping, ____layoutId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Player_Editor_Mapping) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.Player_Editor/ControllerMapLayoutManagerSettings
class CORDL_TYPE Player_Editor_ControllerMapLayoutManagerSettings : public ::System::Object {
public:
// Declarations
/// @brief Field _enabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__enabled, put=__cordl_internal_set__enabled)) bool  _enabled;

/// @brief Field _loadFromUserDataStore, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get__loadFromUserDataStore, put=__cordl_internal_set__loadFromUserDataStore)) bool  _loadFromUserDataStore;

/// @brief Field _ruleSets, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ruleSets, put=__cordl_internal_set__ruleSets)) ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_RuleSetMapping*>*  _ruleSets;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(get=get_loadFromUserDataStore, put=set_loadFromUserDataStore)) bool  loadFromUserDataStore;

 __declspec(property(get=get_ruleSets, put=set_ruleSets)) ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_RuleSetMapping*>*  ruleSets;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr operator  ::Rewired::Utils::Interfaces::IDeepCloneable*() noexcept;

static inline ::Rewired::Data::Player_Editor_ControllerMapLayoutManagerSettings* New_ctor() ;

static inline ::Rewired::Data::Player_Editor_ControllerMapLayoutManagerSettings* New_ctor(::Rewired::Data::Player_Editor_ControllerMapLayoutManagerSettings*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method RNkcSCUiUaWBurFSVmesNYvZgMvP, addr 0x18188b1c0, size 0x120, virtual false, abstract: false, final false
inline ::Rewired::ControllerMapLayoutManager_FOWeqvvrXTgrClqvTskzMNatLEZq* RNkcSCUiUaWBurFSVmesNYvZgMvP() ;

/// @brief Method Rewired.Utils.Interfaces.IDeepCloneable.DeepClone, addr 0x18188b2e0, size 0xa0, virtual true, abstract: false, final true
inline ::System::Object* Rewired_Utils_Interfaces_IDeepCloneable_DeepClone() ;

constexpr bool const& __cordl_internal_get__enabled() const;

constexpr bool& __cordl_internal_get__enabled() ;

constexpr bool const& __cordl_internal_get__loadFromUserDataStore() const;

constexpr bool& __cordl_internal_get__loadFromUserDataStore() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_RuleSetMapping*>* const& __cordl_internal_get__ruleSets() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_RuleSetMapping*>*& __cordl_internal_get__ruleSets() ;

constexpr void __cordl_internal_set__enabled(bool  value) ;

constexpr void __cordl_internal_set__loadFromUserDataStore(bool  value) ;

constexpr void __cordl_internal_set__ruleSets(::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_RuleSetMapping*>*  value) ;

/// @brief Method .ctor, addr 0x18188b380, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18188b3e0, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Data::Player_Editor_ControllerMapLayoutManagerSettings*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_enabled, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_loadFromUserDataStore, addr 0x180503b10, size 0x10, virtual false, abstract: false, final false
inline bool get_loadFromUserDataStore() ;

/// @brief Method get_ruleSets, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_RuleSetMapping*>* get_ruleSets() ;

/// @brief Convert to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr ::Rewired::Utils::Interfaces::IDeepCloneable* i___Rewired__Utils__Interfaces__IDeepCloneable() noexcept;

/// @brief Method npQLUCUUeIUmhhJqYTomanFADffiA, addr 0x18188b0e0, size 0xe0, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::KksbZTwLuzLjTBgSfpIqbygtAeKo*> npQLUCUUeIUmhhJqYTomanFADffiA() ;

/// @brief Method set_enabled, addr 0x1803924a0, size 0x10, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method set_loadFromUserDataStore, addr 0x180503b60, size 0x10, virtual false, abstract: false, final false
inline void set_loadFromUserDataStore(bool  value) ;

/// @brief Method set_ruleSets, addr 0x18188b070, size 0x70, virtual false, abstract: false, final false
inline void set_ruleSets(::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_RuleSetMapping*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Player_Editor_ControllerMapLayoutManagerSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Player_Editor_ControllerMapLayoutManagerSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Player_Editor_ControllerMapLayoutManagerSettings(Player_Editor_ControllerMapLayoutManagerSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Player_Editor_ControllerMapLayoutManagerSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Player_Editor_ControllerMapLayoutManagerSettings(Player_Editor_ControllerMapLayoutManagerSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2348};

/// @brief Field _enabled, offset: 0x10, size: 0x1, def value: None
 bool  ____enabled;

/// @brief Field _loadFromUserDataStore, offset: 0x11, size: 0x1, def value: None
 bool  ____loadFromUserDataStore;

/// @brief Field _ruleSets, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_RuleSetMapping*>*  ____ruleSets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Player_Editor_ControllerMapLayoutManagerSettings, ____enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Player_Editor_ControllerMapLayoutManagerSettings, ____loadFromUserDataStore) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Player_Editor_ControllerMapLayoutManagerSettings, ____ruleSets) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Player_Editor_ControllerMapLayoutManagerSettings) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.Player_Editor/ControllerMapEnablerSettings
class CORDL_TYPE Player_Editor_ControllerMapEnablerSettings : public ::System::Object {
public:
// Declarations
/// @brief Field _enabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__enabled, put=__cordl_internal_set__enabled)) bool  _enabled;

/// @brief Field _ruleSets, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ruleSets, put=__cordl_internal_set__ruleSets)) ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_RuleSetMapping*>*  _ruleSets;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(get=get_ruleSets, put=set_ruleSets)) ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_RuleSetMapping*>*  ruleSets;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr operator  ::Rewired::Utils::Interfaces::IDeepCloneable*() noexcept;

static inline ::Rewired::Data::Player_Editor_ControllerMapEnablerSettings* New_ctor() ;

static inline ::Rewired::Data::Player_Editor_ControllerMapEnablerSettings* New_ctor(::Rewired::Data::Player_Editor_ControllerMapEnablerSettings*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method RAZGJntfAyGMcurhudzlcwGiVPNoA, addr 0x18188adf0, size 0x100, virtual false, abstract: false, final false
inline ::Rewired::ControllerMapEnabler_BZumMxELvlwrHpCwgIyAmXeEeQBK* RAZGJntfAyGMcurhudzlcwGiVPNoA() ;

/// @brief Method Rewired.Utils.Interfaces.IDeepCloneable.DeepClone, addr 0x18188aef0, size 0xa0, virtual true, abstract: false, final true
inline ::System::Object* Rewired_Utils_Interfaces_IDeepCloneable_DeepClone() ;

constexpr bool const& __cordl_internal_get__enabled() const;

constexpr bool& __cordl_internal_get__enabled() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_RuleSetMapping*>* const& __cordl_internal_get__ruleSets() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_RuleSetMapping*>*& __cordl_internal_get__ruleSets() ;

constexpr void __cordl_internal_set__enabled(bool  value) ;

constexpr void __cordl_internal_set__ruleSets(::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_RuleSetMapping*>*  value) ;

/// @brief Method .ctor, addr 0x18188af90, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18188afe0, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Data::Player_Editor_ControllerMapEnablerSettings*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_enabled, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_ruleSets, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_RuleSetMapping*>* get_ruleSets() ;

/// @brief Convert to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr ::Rewired::Utils::Interfaces::IDeepCloneable* i___Rewired__Utils__Interfaces__IDeepCloneable() noexcept;

/// @brief Method set_enabled, addr 0x1803924a0, size 0x10, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method set_ruleSets, addr 0x18188b070, size 0x70, virtual false, abstract: false, final false
inline void set_ruleSets(::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_RuleSetMapping*>*  value) ;

/// @brief Method wXpVXRNZBpRdGSQQOvybFWATsMUP, addr 0x18188b0e0, size 0xe0, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::KksbZTwLuzLjTBgSfpIqbygtAeKo*> wXpVXRNZBpRdGSQQOvybFWATsMUP() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Player_Editor_ControllerMapEnablerSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Player_Editor_ControllerMapEnablerSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Player_Editor_ControllerMapEnablerSettings(Player_Editor_ControllerMapEnablerSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Player_Editor_ControllerMapEnablerSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Player_Editor_ControllerMapEnablerSettings(Player_Editor_ControllerMapEnablerSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2349};

/// @brief Field _enabled, offset: 0x10, size: 0x1, def value: None
 bool  ____enabled;

/// @brief Field _ruleSets, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_RuleSetMapping*>*  ____ruleSets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Player_Editor_ControllerMapEnablerSettings, ____enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Player_Editor_ControllerMapEnablerSettings, ____ruleSets) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Player_Editor_ControllerMapEnablerSettings) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.Player_Editor/RuleSetMapping
class CORDL_TYPE Player_Editor_RuleSetMapping : public ::System::Object {
public:
// Declarations
/// @brief Field _enabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__enabled, put=__cordl_internal_set__enabled)) bool  _enabled;

/// @brief Field _id, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__id, put=__cordl_internal_set__id)) int32_t  _id;

 __declspec(property(get=get_enabled, put=zSoaqaOBQqggYGYtpuqwEcYWQekv)) bool  enabled;

 __declspec(property(get=get_id, put=SJUSNzDwwoRQxhSaWvaTeqTBuUSL)) int32_t  id;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr operator  ::Rewired::Utils::Interfaces::IDeepCloneable*() noexcept;

/// @brief Method Clear, addr 0x18188e9a0, size 0x10, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Clone, addr 0x18188e9b0, size 0x30, virtual false, abstract: false, final false
inline ::Rewired::Data::Player_Editor_RuleSetMapping* Clone() ;

static inline ::Rewired::Data::Player_Editor_RuleSetMapping* New_ctor() ;

static inline ::Rewired::Data::Player_Editor_RuleSetMapping* New_ctor(::Rewired::Data::Player_Editor_RuleSetMapping*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Data::Player_Editor_RuleSetMapping* New_ctor(bool  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method Rewired.Utils.Interfaces.IDeepCloneable.DeepClone, addr 0x18188e9e0, size 0x50, virtual true, abstract: false, final true
inline ::System::Object* Rewired_Utils_Interfaces_IDeepCloneable_DeepClone() ;

/// @brief Method SJUSNzDwwoRQxhSaWvaTeqTBuUSL, addr 0x1803924c0, size 0x10, virtual false, abstract: false, final false
inline void SJUSNzDwwoRQxhSaWvaTeqTBuUSL(int32_t  _cordl_fixed_empty_name_whitespace) ;

constexpr bool const& __cordl_internal_get__enabled() const;

constexpr bool& __cordl_internal_get__enabled() ;

constexpr int32_t const& __cordl_internal_get__id() const;

constexpr int32_t& __cordl_internal_get__id() ;

constexpr void __cordl_internal_set__enabled(bool  value) ;

constexpr void __cordl_internal_set__id(int32_t  value) ;

/// @brief Method .ctor, addr 0x18188e9a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18188ea30, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Data::Player_Editor_RuleSetMapping*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x18188ea70, size 0x10, virtual false, abstract: false, final false
inline void _ctor(bool  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_enabled, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_id, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_id() ;

/// @brief Convert to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr ::Rewired::Utils::Interfaces::IDeepCloneable* i___Rewired__Utils__Interfaces__IDeepCloneable() noexcept;

/// @brief Method igVySgCTRCngRDgjvzTzAZvzHZbH, addr 0x18188ea80, size 0x50, virtual false, abstract: false, final false
inline ::GlobalNamespace::KksbZTwLuzLjTBgSfpIqbygtAeKo* igVySgCTRCngRDgjvzTzAZvzHZbH() ;

/// @brief Method zSoaqaOBQqggYGYtpuqwEcYWQekv, addr 0x1803924a0, size 0x10, virtual false, abstract: false, final false
inline void zSoaqaOBQqggYGYtpuqwEcYWQekv(bool  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Player_Editor_RuleSetMapping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Player_Editor_RuleSetMapping", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Player_Editor_RuleSetMapping(Player_Editor_RuleSetMapping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Player_Editor_RuleSetMapping", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Player_Editor_RuleSetMapping(Player_Editor_RuleSetMapping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2350};

/// @brief Field _enabled, offset: 0x10, size: 0x1, def value: None
 bool  ____enabled;

/// @brief Field _id, offset: 0x14, size: 0x4, def value: None
 int32_t  ____id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Player_Editor_RuleSetMapping, ____enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Player_Editor_RuleSetMapping, ____id) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Player_Editor_RuleSetMapping) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.Player_Editor/CreateControllerInfo
class CORDL_TYPE Player_Editor_CreateControllerInfo : public ::System::Object {
public:
// Declarations
/// @brief Field _sourceId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__sourceId, put=__cordl_internal_set__sourceId)) int32_t  _sourceId;

/// @brief Field _tag, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__tag, put=__cordl_internal_set__tag)) ::StringW  _tag;

 __declspec(property(get=get_sourceId, put=bVMEXmxtzGBiXkDOJspYEmXzamDzA)) int32_t  sourceId;

 __declspec(property(get=get_tag, put=rfdrlzncSqJtpufOaWaxmCAuRCxI)) ::StringW  tag;

static inline ::Rewired::Data::Player_Editor_CreateControllerInfo* New_ctor() ;

static inline ::Rewired::Data::Player_Editor_CreateControllerInfo* New_ctor(::Rewired::Data::Player_Editor_CreateControllerInfo*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Data::Player_Editor_CreateControllerInfo* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr int32_t const& __cordl_internal_get__sourceId() const;

constexpr int32_t& __cordl_internal_get__sourceId() ;

constexpr ::StringW const& __cordl_internal_get__tag() const;

constexpr ::StringW& __cordl_internal_get__tag() ;

constexpr void __cordl_internal_set__sourceId(int32_t  value) ;

constexpr void __cordl_internal_set__tag(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18188b470, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Data::Player_Editor_CreateControllerInfo*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x18048af70, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method bVMEXmxtzGBiXkDOJspYEmXzamDzA, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void bVMEXmxtzGBiXkDOJspYEmXzamDzA(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_sourceId, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_sourceId() ;

/// @brief Method get_tag, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_tag() ;

/// @brief Method rfdrlzncSqJtpufOaWaxmCAuRCxI, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void rfdrlzncSqJtpufOaWaxmCAuRCxI(::StringW  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Player_Editor_CreateControllerInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Player_Editor_CreateControllerInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Player_Editor_CreateControllerInfo(Player_Editor_CreateControllerInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Player_Editor_CreateControllerInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Player_Editor_CreateControllerInfo(Player_Editor_CreateControllerInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2351};

/// @brief Field _sourceId, offset: 0x10, size: 0x4, def value: None
 int32_t  ____sourceId;

/// @brief Field _tag, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____tag;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Player_Editor_CreateControllerInfo, ____sourceId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Player_Editor_CreateControllerInfo, ____tag) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Player_Editor_CreateControllerInfo) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.Player_Editor
class CORDL_TYPE Player_Editor : public ::System::Object {
public:
// Declarations
using ControllerMapEnablerSettings = ::Rewired::Data::Player_Editor_ControllerMapEnablerSettings;

using ControllerMapLayoutManagerSettings = ::Rewired::Data::Player_Editor_ControllerMapLayoutManagerSettings;

using CreateControllerInfo = ::Rewired::Data::Player_Editor_CreateControllerInfo;

using Mapping = ::Rewired::Data::Player_Editor_Mapping;

using RuleSetMapping = ::Rewired::Data::Player_Editor_RuleSetMapping;

/// @brief Field _assignKeyboardOnStart, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__assignKeyboardOnStart, put=__cordl_internal_set__assignKeyboardOnStart)) bool  _assignKeyboardOnStart;

/// @brief Field _assignMouseOnStart, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__assignMouseOnStart, put=__cordl_internal_set__assignMouseOnStart)) bool  _assignMouseOnStart;

/// @brief Field _controllerMapEnablerSettings, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__controllerMapEnablerSettings, put=__cordl_internal_set__controllerMapEnablerSettings)) ::Rewired::Data::Player_Editor_ControllerMapEnablerSettings*  _controllerMapEnablerSettings;

/// @brief Field _controllerMapLayoutManagerSettings, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__controllerMapLayoutManagerSettings, put=__cordl_internal_set__controllerMapLayoutManagerSettings)) ::Rewired::Data::Player_Editor_ControllerMapLayoutManagerSettings*  _controllerMapLayoutManagerSettings;

/// @brief Field _defaultCustomControllerMaps, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultCustomControllerMaps, put=__cordl_internal_set__defaultCustomControllerMaps)) ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>*  _defaultCustomControllerMaps;

/// @brief Field _defaultJoystickMaps, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultJoystickMaps, put=__cordl_internal_set__defaultJoystickMaps)) ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>*  _defaultJoystickMaps;

/// @brief Field _defaultKeyboardMaps, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultKeyboardMaps, put=__cordl_internal_set__defaultKeyboardMaps)) ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>*  _defaultKeyboardMaps;

/// @brief Field _defaultMouseMaps, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultMouseMaps, put=__cordl_internal_set__defaultMouseMaps)) ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>*  _defaultMouseMaps;

/// @brief Field _descriptiveName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__descriptiveName, put=__cordl_internal_set__descriptiveName)) ::StringW  _descriptiveName;

/// @brief Field _excludeFromControllerAutoAssignment, offset 0x62, size 0x1 
 __declspec(property(get=__cordl_internal_get__excludeFromControllerAutoAssignment, put=__cordl_internal_set__excludeFromControllerAutoAssignment)) bool  _excludeFromControllerAutoAssignment;

/// @brief Field _id, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__id, put=__cordl_internal_set__id)) int32_t  _id;

/// @brief Field _key, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__key, put=__cordl_internal_set__key)) ::StringW  _key;

/// @brief Field _name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _startPlaying, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__startPlaying, put=__cordl_internal_set__startPlaying)) bool  _startPlaying;

/// @brief Field _startingCustomControllers, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__startingCustomControllers, put=__cordl_internal_set__startingCustomControllers)) ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_CreateControllerInfo*>*  _startingCustomControllers;

 __declspec(property(get=get_assignKeyboardOnStart, put=BFeCJSjPJuscNBJioQPVYjxmhabm)) bool  assignKeyboardOnStart;

 __declspec(property(get=get_assignMouseOnStart, put=OBQVHWNmPnnElBJFiSTIESthgzpB)) bool  assignMouseOnStart;

 __declspec(property(get=get_controllerMapEnablerSettings, put=set_controllerMapEnablerSettings)) ::Rewired::Data::Player_Editor_ControllerMapEnablerSettings*  controllerMapEnablerSettings;

 __declspec(property(get=get_controllerMapLayoutManagerSettings, put=set_controllerMapLayoutManagerSettings)) ::Rewired::Data::Player_Editor_ControllerMapLayoutManagerSettings*  controllerMapLayoutManagerSettings;

 __declspec(property(get=get_defaultCustomControllerMaps, put=lcQOdFflBXehikkoIafwtGhRkHZPA)) ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>*  defaultCustomControllerMaps;

 __declspec(property(get=get_defaultJoystickMaps, put=CCwXBhGtACjEFTbsVqoihuwtrJEt)) ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>*  defaultJoystickMaps;

 __declspec(property(get=get_defaultKeyboardMaps, put=PJOCaPiYBsrVzNyYbBveIAKMdluR)) ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>*  defaultKeyboardMaps;

 __declspec(property(get=get_defaultMouseMaps, put=PWlcoPjzsunthkHIxAZzrJueEZbdb)) ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>*  defaultMouseMaps;

 __declspec(property(get=get_descriptiveName, put=TLWXOoCFzHVaEzvrddwiThaifjhi)) ::StringW  descriptiveName;

 __declspec(property(get=get_excludeFromControllerAutoAssignment, put=VAyqeqliSmFKNlHenigRBAdpzRORA)) bool  excludeFromControllerAutoAssignment;

 __declspec(property(get=get_id, put=FhamxijfmOujfpUkLucZgMHFUSIL)) int32_t  id;

 __declspec(property(get=get_key, put=llRAWyFeOjbVXkUsRXIWncDUHqJEA)) ::StringW  key;

 __declspec(property(get=get_name, put=nnPXpGdSjhYZVcUSWJXlYwvYHmXB)) ::StringW  name;

 __declspec(property(get=get_startPlaying, put=axbUkikbFzeMIifhaQwZsduijfAB)) bool  startPlaying;

 __declspec(property(get=get_startingCustomControllers, put=vVHlrIYcmZPoRAozdxXeFdvcPJmx)) ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_CreateControllerInfo*>*  startingCustomControllers;

/// @brief Method BFeCJSjPJuscNBJioQPVYjxmhabm, addr 0x1816ddb50, size 0x10, virtual false, abstract: false, final false
inline void BFeCJSjPJuscNBJioQPVYjxmhabm(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method CCwXBhGtACjEFTbsVqoihuwtrJEt, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void CCwXBhGtACjEFTbsVqoihuwtrJEt(::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Clone, addr 0x18188dcd0, size 0x40, virtual false, abstract: false, final false
inline ::Rewired::Data::Player_Editor* Clone() ;

/// @brief Method FhamxijfmOujfpUkLucZgMHFUSIL, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void FhamxijfmOujfpUkLucZgMHFUSIL(int32_t  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Data::Player_Editor* New_ctor() ;

static inline ::Rewired::Data::Player_Editor* New_ctor(::Rewired::Data::Player_Editor*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method OBQVHWNmPnnElBJFiSTIESthgzpB, addr 0x1803ac420, size 0x10, virtual false, abstract: false, final false
inline void OBQVHWNmPnnElBJFiSTIESthgzpB(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method PJOCaPiYBsrVzNyYbBveIAKMdluR, addr 0x1802e5e30, size 0x10, virtual false, abstract: false, final false
inline void PJOCaPiYBsrVzNyYbBveIAKMdluR(::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method PWlcoPjzsunthkHIxAZzrJueEZbdb, addr 0x1802e5d90, size 0x10, virtual false, abstract: false, final false
inline void PWlcoPjzsunthkHIxAZzrJueEZbdb(::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method TLWXOoCFzHVaEzvrddwiThaifjhi, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void TLWXOoCFzHVaEzvrddwiThaifjhi(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method VAyqeqliSmFKNlHenigRBAdpzRORA, addr 0x180dea030, size 0x820, virtual false, abstract: false, final false
inline void VAyqeqliSmFKNlHenigRBAdpzRORA(bool  _cordl_fixed_empty_name_whitespace) ;

constexpr bool const& __cordl_internal_get__assignKeyboardOnStart() const;

constexpr bool& __cordl_internal_get__assignKeyboardOnStart() ;

constexpr bool const& __cordl_internal_get__assignMouseOnStart() const;

constexpr bool& __cordl_internal_get__assignMouseOnStart() ;

constexpr ::Rewired::Data::Player_Editor_ControllerMapEnablerSettings* const& __cordl_internal_get__controllerMapEnablerSettings() const;

constexpr ::Rewired::Data::Player_Editor_ControllerMapEnablerSettings*& __cordl_internal_get__controllerMapEnablerSettings() ;

constexpr ::Rewired::Data::Player_Editor_ControllerMapLayoutManagerSettings* const& __cordl_internal_get__controllerMapLayoutManagerSettings() const;

constexpr ::Rewired::Data::Player_Editor_ControllerMapLayoutManagerSettings*& __cordl_internal_get__controllerMapLayoutManagerSettings() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>* const& __cordl_internal_get__defaultCustomControllerMaps() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>*& __cordl_internal_get__defaultCustomControllerMaps() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>* const& __cordl_internal_get__defaultJoystickMaps() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>*& __cordl_internal_get__defaultJoystickMaps() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>* const& __cordl_internal_get__defaultKeyboardMaps() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>*& __cordl_internal_get__defaultKeyboardMaps() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>* const& __cordl_internal_get__defaultMouseMaps() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>*& __cordl_internal_get__defaultMouseMaps() ;

constexpr ::StringW const& __cordl_internal_get__descriptiveName() const;

constexpr ::StringW& __cordl_internal_get__descriptiveName() ;

constexpr bool const& __cordl_internal_get__excludeFromControllerAutoAssignment() const;

constexpr bool& __cordl_internal_get__excludeFromControllerAutoAssignment() ;

constexpr int32_t const& __cordl_internal_get__id() const;

constexpr int32_t& __cordl_internal_get__id() ;

constexpr ::StringW const& __cordl_internal_get__key() const;

constexpr ::StringW& __cordl_internal_get__key() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr bool const& __cordl_internal_get__startPlaying() const;

constexpr bool& __cordl_internal_get__startPlaying() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_CreateControllerInfo*>* const& __cordl_internal_get__startingCustomControllers() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_CreateControllerInfo*>*& __cordl_internal_get__startingCustomControllers() ;

constexpr void __cordl_internal_set__assignKeyboardOnStart(bool  value) ;

constexpr void __cordl_internal_set__assignMouseOnStart(bool  value) ;

constexpr void __cordl_internal_set__controllerMapEnablerSettings(::Rewired::Data::Player_Editor_ControllerMapEnablerSettings*  value) ;

constexpr void __cordl_internal_set__controllerMapLayoutManagerSettings(::Rewired::Data::Player_Editor_ControllerMapLayoutManagerSettings*  value) ;

constexpr void __cordl_internal_set__defaultCustomControllerMaps(::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>*  value) ;

constexpr void __cordl_internal_set__defaultJoystickMaps(::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>*  value) ;

constexpr void __cordl_internal_set__defaultKeyboardMaps(::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>*  value) ;

constexpr void __cordl_internal_set__defaultMouseMaps(::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>*  value) ;

constexpr void __cordl_internal_set__descriptiveName(::StringW  value) ;

constexpr void __cordl_internal_set__excludeFromControllerAutoAssignment(bool  value) ;

constexpr void __cordl_internal_set__id(int32_t  value) ;

constexpr void __cordl_internal_set__key(::StringW  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__startPlaying(bool  value) ;

constexpr void __cordl_internal_set__startingCustomControllers(::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_CreateControllerInfo*>*  value) ;

/// @brief Method .ctor, addr 0x18188e3f0, size 0x1c0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18188dd10, size 0x6e0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Data::Player_Editor*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method axbUkikbFzeMIifhaQwZsduijfAB, addr 0x180499eb0, size 0x10, virtual false, abstract: false, final false
inline void axbUkikbFzeMIifhaQwZsduijfAB(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_assignKeyboardOnStart, addr 0x1815f5410, size 0x10, virtual false, abstract: false, final false
inline bool get_assignKeyboardOnStart() ;

/// @brief Method get_assignMouseOnStart, addr 0x1802e75b0, size 0x10, virtual false, abstract: false, final false
inline bool get_assignMouseOnStart() ;

/// @brief Method get_controllerMapEnablerSettings, addr 0x18039fe40, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Data::Player_Editor_ControllerMapEnablerSettings* get_controllerMapEnablerSettings() ;

/// @brief Method get_controllerMapLayoutManagerSettings, addr 0x1802e5710, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Data::Player_Editor_ControllerMapLayoutManagerSettings* get_controllerMapLayoutManagerSettings() ;

/// @brief Method get_defaultCustomControllerMaps, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>* get_defaultCustomControllerMaps() ;

/// @brief Method get_defaultJoystickMaps, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>* get_defaultJoystickMaps() ;

/// @brief Method get_defaultKeyboardMaps, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>* get_defaultKeyboardMaps() ;

/// @brief Method get_defaultMouseMaps, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>* get_defaultMouseMaps() ;

/// @brief Method get_descriptiveName, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_descriptiveName() ;

/// @brief Method get_excludeFromControllerAutoAssignment, addr 0x180de9db0, size 0x130, virtual false, abstract: false, final false
inline bool get_excludeFromControllerAutoAssignment() ;

/// @brief Method get_id, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_id() ;

/// @brief Method get_key, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_key() ;

/// @brief Method get_name, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_startPlaying, addr 0x1803561b0, size 0x10, virtual false, abstract: false, final false
inline bool get_startPlaying() ;

/// @brief Method get_startingCustomControllers, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_CreateControllerInfo*>* get_startingCustomControllers() ;

/// @brief Method lcQOdFflBXehikkoIafwtGhRkHZPA, addr 0x180308de0, size 0x10, virtual false, abstract: false, final false
inline void lcQOdFflBXehikkoIafwtGhRkHZPA(::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method llRAWyFeOjbVXkUsRXIWncDUHqJEA, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void llRAWyFeOjbVXkUsRXIWncDUHqJEA(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method nnPXpGdSjhYZVcUSWJXlYwvYHmXB, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void nnPXpGdSjhYZVcUSWJXlYwvYHmXB(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method set_controllerMapEnablerSettings, addr 0x1803d5ad0, size 0x10, virtual false, abstract: false, final false
inline void set_controllerMapEnablerSettings(::Rewired::Data::Player_Editor_ControllerMapEnablerSettings*  value) ;

/// @brief Method set_controllerMapLayoutManagerSettings, addr 0x1802e5a20, size 0x10, virtual false, abstract: false, final false
inline void set_controllerMapLayoutManagerSettings(::Rewired::Data::Player_Editor_ControllerMapLayoutManagerSettings*  value) ;

/// @brief Method tHDiYgdFdxHwOFkureDYiaVrLIAib, addr 0x18188e5b0, size 0x3f0, virtual false, abstract: false, final false
inline ::GlobalNamespace::VqnzSQXAiGOZEXCaojnvdnhTOFrhb* tHDiYgdFdxHwOFkureDYiaVrLIAib() ;

/// @brief Method vVHlrIYcmZPoRAozdxXeFdvcPJmx, addr 0x1802f8080, size 0x10, virtual false, abstract: false, final false
inline void vVHlrIYcmZPoRAozdxXeFdvcPJmx(::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_CreateControllerInfo*>*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Player_Editor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Player_Editor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Player_Editor(Player_Editor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Player_Editor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Player_Editor(Player_Editor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2352};

/// @brief Field _id, offset: 0x10, size: 0x4, def value: None
 int32_t  ____id;

/// @brief Field _name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____name;

/// @brief Field _descriptiveName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____descriptiveName;

/// @brief Field _key, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____key;

/// @brief Field _startPlaying, offset: 0x30, size: 0x1, def value: None
 bool  ____startPlaying;

/// @brief Field _defaultJoystickMaps, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>*  ____defaultJoystickMaps;

/// @brief Field _defaultMouseMaps, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>*  ____defaultMouseMaps;

/// @brief Field _defaultKeyboardMaps, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>*  ____defaultKeyboardMaps;

/// @brief Field _defaultCustomControllerMaps, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_Mapping*>*  ____defaultCustomControllerMaps;

/// @brief Field _startingCustomControllers, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::Data::Player_Editor_CreateControllerInfo*>*  ____startingCustomControllers;

/// @brief Field _assignMouseOnStart, offset: 0x60, size: 0x1, def value: None
 bool  ____assignMouseOnStart;

/// @brief Field _assignKeyboardOnStart, offset: 0x61, size: 0x1, def value: None
 bool  ____assignKeyboardOnStart;

/// @brief Field _excludeFromControllerAutoAssignment, offset: 0x62, size: 0x1, def value: None
 bool  ____excludeFromControllerAutoAssignment;

/// @brief Field _controllerMapLayoutManagerSettings, offset: 0x68, size: 0x8, def value: None
 ::Rewired::Data::Player_Editor_ControllerMapLayoutManagerSettings*  ____controllerMapLayoutManagerSettings;

/// @brief Field _controllerMapEnablerSettings, offset: 0x70, size: 0x8, def value: None
 ::Rewired::Data::Player_Editor_ControllerMapEnablerSettings*  ____controllerMapEnablerSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Player_Editor, ____id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Player_Editor, ____name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Player_Editor, ____descriptiveName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Player_Editor, ____key) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Player_Editor, ____startPlaying) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Player_Editor, ____defaultJoystickMaps) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Player_Editor, ____defaultMouseMaps) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Player_Editor, ____defaultKeyboardMaps) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Player_Editor, ____defaultCustomControllerMaps) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Player_Editor, ____startingCustomControllers) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Player_Editor, ____assignMouseOnStart) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Player_Editor, ____assignKeyboardOnStart) == 0x61, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Player_Editor, ____excludeFromControllerAutoAssignment) == 0x62, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Player_Editor, ____controllerMapLayoutManagerSettings) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Player_Editor, ____controllerMapEnablerSettings) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Player_Editor) == 0x78, "Size mismatch!");

} // namespace end def Rewired::Data
