#pragma once
// IWYU pragma private; include "GlobalNamespace/ScribeSavableData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScribeSavableData)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
struct ScribeSavableData_SavableCommandMessage;
}
namespace GlobalNamespace {
struct Scribe_Scrible;
}
namespace Mirror {
struct CommandMessage;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ScribeSavableData;
}
namespace GlobalNamespace {
struct ScribeSavableData_SavableCommandMessage;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ScribeSavableData*);
MARK_VAL_T(::GlobalNamespace::ScribeSavableData_SavableCommandMessage);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScribeSavableData*, "", "ScribeSavableData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScribeSavableData_SavableCommandMessage, "", "ScribeSavableData/SavableCommandMessage");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ScribeSavableData/SavableCommandMessage
struct CORDL_TYPE ScribeSavableData_SavableCommandMessage {
public:
// Declarations
/// @brief Method ToCommandMessage, addr 0x1803eef60, size 0xb0, virtual false, abstract: false, final false
inline ::Mirror::CommandMessage ToCommandMessage(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method .ctor, addr 0x1803ef010, size 0x140, virtual false, abstract: false, final false
inline void _ctor(::Mirror::CommandMessage  commandMessage) ;

// Ctor Parameters []
// @brief default ctor
constexpr ScribeSavableData_SavableCommandMessage() ;

// Ctor Parameters [CppParam { name: "componentIndex", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "functionHash", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "payload", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr ScribeSavableData_SavableCommandMessage(uint8_t  componentIndex, uint16_t  functionHash, ::ArrayW<uint8_t>  payload) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4915};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field componentIndex, offset: 0x0, size: 0x1, def value: None
 uint8_t  componentIndex;

/// @brief Field functionHash, offset: 0x2, size: 0x2, def value: None
 uint16_t  functionHash;

/// @brief Field payload, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<uint8_t>  payload;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScribeSavableData_SavableCommandMessage, componentIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScribeSavableData_SavableCommandMessage, functionHash) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScribeSavableData_SavableCommandMessage, payload) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScribeSavableData_SavableCommandMessage) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScribeSavableData
class CORDL_TYPE ScribeSavableData : public ::System::Object {
public:
// Declarations
using SavableCommandMessage = ::GlobalNamespace::ScribeSavableData_SavableCommandMessage;

/// @brief Field scribles, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_scribles, put=__cordl_internal_set_scribles)) ::System::Collections::Generic::List_1<::GlobalNamespace::Scribe_Scrible>*  scribles;

static inline ::GlobalNamespace::ScribeSavableData* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Scribe_Scrible>* const& __cordl_internal_get_scribles() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Scribe_Scrible>*& __cordl_internal_get_scribles() ;

constexpr void __cordl_internal_set_scribles(::System::Collections::Generic::List_1<::GlobalNamespace::Scribe_Scrible>*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScribeSavableData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScribeSavableData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScribeSavableData(ScribeSavableData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScribeSavableData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScribeSavableData(ScribeSavableData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4916};

/// @brief Field scribles, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::Scribe_Scrible>*  ___scribles;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScribeSavableData, ___scribles) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScribeSavableData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
