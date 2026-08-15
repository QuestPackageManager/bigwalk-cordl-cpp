#pragma once
// IWYU pragma private; include "GlobalNamespace/Scribe.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__ScribeSavableData_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Scribe)
namespace GlobalNamespace {
class ScribeSavableData;
}
namespace GlobalNamespace {
struct Scribe_Scrible;
}
namespace Mirror {
struct CommandMessage;
}
namespace Mirror {
struct NetworkDiagnostics_MessageInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class Scribe;
}
namespace GlobalNamespace {
struct Scribe_Scrible;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Scribe*);
MARK_VAL_T(::GlobalNamespace::Scribe_Scrible);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Scribe*, "", "Scribe");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Scribe_Scrible, "", "Scribe/Scrible");
// Dependencies ScribeSavableData::SavableCommandMessage
namespace GlobalNamespace {
// Is value type: true
// CS Name: Scribe/Scrible
struct CORDL_TYPE Scribe_Scrible {
public:
// Declarations
/// @brief Method .ctor, addr 0x1803efd90, size 0x1f0, virtual false, abstract: false, final false
inline void _ctor(::Mirror::CommandMessage  commandMessage, double_t  time, int32_t  channel, int32_t  playerIndex) ;

// Ctor Parameters []
// @brief default ctor
constexpr Scribe_Scrible() ;

// Ctor Parameters [CppParam { name: "commandMessage", ty: "::GlobalNamespace::ScribeSavableData_SavableCommandMessage", modifiers: "", def_value: None }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "channel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "playerIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Scribe_Scrible(::GlobalNamespace::ScribeSavableData_SavableCommandMessage  commandMessage, float_t  time, int32_t  channel, int32_t  playerIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4913};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field commandMessage, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::ScribeSavableData_SavableCommandMessage  commandMessage;

/// @brief Field time, offset: 0x10, size: 0x4, def value: None
 float_t  time;

/// @brief Field channel, offset: 0x14, size: 0x4, def value: None
 int32_t  channel;

/// @brief Field playerIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  playerIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Scribe_Scrible, commandMessage) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Scribe_Scrible, time) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Scribe_Scrible, channel) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Scribe_Scrible, playerIndex) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Scribe_Scrible) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PlayerCharacter, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: Scribe
class CORDL_TYPE Scribe : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Scrible = ::GlobalNamespace::Scribe_Scrible;

/// @brief Field isPlaybacking, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPlaybacking, put=__cordl_internal_set_isPlaybacking)) bool  isPlaybacking;

/// @brief Field loadFileName, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadFileName, put=__cordl_internal_set_loadFileName)) ::StringW  loadFileName;

/// @brief Field logVerbose, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field playbackScribles, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_playbackScribles, put=__cordl_internal_set_playbackScribles)) ::System::Collections::Generic::List_1<::GlobalNamespace::Scribe_Scrible>*  playbackScribles;

/// @brief Field playbackTime, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_playbackTime, put=__cordl_internal_set_playbackTime)) double_t  playbackTime;

/// @brief Field playerCharacters, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacters, put=__cordl_internal_set_playerCharacters)) ::ArrayW<::UnityW<::GlobalNamespace::PlayerCharacter>>  playerCharacters;

/// @brief Field record, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_record, put=__cordl_internal_set_record)) bool  record;

/// @brief Field savableData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_savableData, put=__cordl_internal_set_savableData)) ::GlobalNamespace::ScribeSavableData*  savableData;

/// @brief Method GetAllSaveDatasInFolder, addr 0x1803ef150, size 0x1c0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::ScribeSavableData*>* GetAllSaveDatasInFolder() ;

/// @brief Method GetDataFolder, addr 0x1803ef310, size 0x30, virtual false, abstract: false, final false
static inline ::StringW GetDataFolder() ;

/// @brief Method Load, addr 0x1803ef340, size 0x50, virtual false, abstract: false, final false
inline void Load() ;

static inline ::GlobalNamespace::Scribe* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803ef390, size 0x50, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803ef3e0, size 0xa0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnIn, addr 0x1803ef480, size 0x2e0, virtual false, abstract: false, final false
inline void OnIn(::Mirror::NetworkDiagnostics_MessageInfo  messageInfo) ;

/// @brief Method Save, addr 0x1803ef760, size 0x120, virtual false, abstract: false, final false
inline void Save() ;

/// @brief Method StartPlayback, addr 0x1803ef880, size 0x190, virtual false, abstract: false, final false
inline void StartPlayback() ;

/// @brief Method Update, addr 0x1803efa10, size 0x2e0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method WriteSaveData, addr 0x1803efcf0, size 0xa0, virtual false, abstract: false, final false
static inline void WriteSaveData(::StringW  path, ::GlobalNamespace::ScribeSavableData*  data) ;

constexpr bool const& __cordl_internal_get_isPlaybacking() const;

constexpr bool& __cordl_internal_get_isPlaybacking() ;

constexpr ::StringW const& __cordl_internal_get_loadFileName() const;

constexpr ::StringW& __cordl_internal_get_loadFileName() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Scribe_Scrible>* const& __cordl_internal_get_playbackScribles() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Scribe_Scrible>*& __cordl_internal_get_playbackScribles() ;

constexpr double_t const& __cordl_internal_get_playbackTime() const;

constexpr double_t& __cordl_internal_get_playbackTime() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PlayerCharacter>> const& __cordl_internal_get_playerCharacters() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PlayerCharacter>>& __cordl_internal_get_playerCharacters() ;

constexpr bool const& __cordl_internal_get_record() const;

constexpr bool& __cordl_internal_get_record() ;

constexpr ::GlobalNamespace::ScribeSavableData* const& __cordl_internal_get_savableData() const;

constexpr ::GlobalNamespace::ScribeSavableData*& __cordl_internal_get_savableData() ;

constexpr void __cordl_internal_set_isPlaybacking(bool  value) ;

constexpr void __cordl_internal_set_loadFileName(::StringW  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_playbackScribles(::System::Collections::Generic::List_1<::GlobalNamespace::Scribe_Scrible>*  value) ;

constexpr void __cordl_internal_set_playbackTime(double_t  value) ;

constexpr void __cordl_internal_set_playerCharacters(::ArrayW<::UnityW<::GlobalNamespace::PlayerCharacter>>  value) ;

constexpr void __cordl_internal_set_record(bool  value) ;

constexpr void __cordl_internal_set_savableData(::GlobalNamespace::ScribeSavableData*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Scribe() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Scribe", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Scribe(Scribe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Scribe", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Scribe(Scribe const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4914};

/// @brief Field record, offset: 0x20, size: 0x1, def value: None
 bool  ___record;

/// @brief Field playerCharacters, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::PlayerCharacter>>  ___playerCharacters;

/// @brief Field savableData, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::ScribeSavableData*  ___savableData;

/// @brief Field playbackScribles, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::Scribe_Scrible>*  ___playbackScribles;

/// @brief Field isPlaybacking, offset: 0x40, size: 0x1, def value: None
 bool  ___isPlaybacking;

/// @brief Field playbackTime, offset: 0x48, size: 0x8, def value: None
 double_t  ___playbackTime;

/// @brief Field loadFileName, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___loadFileName;

/// @brief Field logVerbose, offset: 0x58, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Scribe, ___record) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Scribe, ___playerCharacters) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Scribe, ___savableData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Scribe, ___playbackScribles) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Scribe, ___isPlaybacking) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Scribe, ___playbackTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Scribe, ___loadFileName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Scribe, ___logVerbose) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Scribe) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
