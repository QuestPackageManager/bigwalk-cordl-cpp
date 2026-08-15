#pragma once
// IWYU pragma private; include "Dissonance/Config/ChatRoomSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChatRoomSettings)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Dissonance::Config {
class ChatRoomSettings;
}
// Write type traits
MARK_REF_T(::Dissonance::Config::ChatRoomSettings*);
DEFINE_IL2CPP_CLASS(::Dissonance::Config::ChatRoomSettings*, "Dissonance.Config", "ChatRoomSettings");
// Dependencies UnityEngine.ScriptableObject
namespace Dissonance::Config {
// Is value type: false
// CS Name: Dissonance.Config.ChatRoomSettings
class CORDL_TYPE ChatRoomSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field DefaultRooms, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DefaultRooms, put=setStaticF_DefaultRooms)) ::System::Collections::Generic::List_1<::StringW>*  DefaultRooms;

/// @brief Field Names, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Names, put=__cordl_internal_set_Names)) ::System::Collections::Generic::List_1<::StringW>*  Names;

/// @brief Field SettingsFilePath, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SettingsFilePath, put=setStaticF_SettingsFilePath)) ::StringW  SettingsFilePath;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::Dissonance::Config::ChatRoomSettings>  _instance;

/// @brief Field _nameLookup, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__nameLookup, put=__cordl_internal_set__nameLookup)) ::System::Collections::Generic::Dictionary_2<uint16_t,::StringW>*  _nameLookup;

/// @brief Method FindRoomById, addr 0x1805da260, size 0x150, virtual false, abstract: false, final false
inline ::StringW FindRoomById(uint16_t  id) ;

/// @brief Method Load, addr 0x1805da3b0, size 0x50, virtual false, abstract: false, final false
static inline ::UnityW<::Dissonance::Config::ChatRoomSettings> Load() ;

static inline ::Dissonance::Config::ChatRoomSettings* New_ctor() ;

/// @brief Method Preload, addr 0x1805da400, size 0xc0, virtual false, abstract: false, final false
static inline void Preload() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_Names() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_Names() ;

constexpr ::System::Collections::Generic::Dictionary_2<uint16_t,::StringW>* const& __cordl_internal_get__nameLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<uint16_t,::StringW>*& __cordl_internal_get__nameLookup() ;

constexpr void __cordl_internal_set_Names(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__nameLookup(::System::Collections::Generic::Dictionary_2<uint16_t,::StringW>*  value) ;

/// @brief Method .ctor, addr 0x1805da760, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_DefaultRooms() ;

static inline ::StringW getStaticF_SettingsFilePath() ;

static inline ::UnityW<::Dissonance::Config::ChatRoomSettings> getStaticF__instance() ;

/// @brief Method get_Instance, addr 0x1805da7f0, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityW<::Dissonance::Config::ChatRoomSettings> get_Instance() ;

static inline void setStaticF_DefaultRooms(::System::Collections::Generic::List_1<::StringW>*  value) ;

static inline void setStaticF_SettingsFilePath(::StringW  value) ;

static inline void setStaticF__instance(::UnityW<::Dissonance::Config::ChatRoomSettings>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChatRoomSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChatRoomSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChatRoomSettings(ChatRoomSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChatRoomSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChatRoomSettings(ChatRoomSettings const& ) = delete;

/// @brief Field SettingsFileResourceName offset 0xffffffff size 0x8
static constexpr ::ConstString  SettingsFileResourceName{u"ChatRoomSettings"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16946};

/// @brief Field Names, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___Names;

/// @brief Field _nameLookup, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<uint16_t,::StringW>*  ____nameLookup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Config::ChatRoomSettings, ___Names) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Config::ChatRoomSettings, ____nameLookup) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Config::ChatRoomSettings) == 0x28, "Size mismatch!");

} // namespace end def Dissonance::Config
