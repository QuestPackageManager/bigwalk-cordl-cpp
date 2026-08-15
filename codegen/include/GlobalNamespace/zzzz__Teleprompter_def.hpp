#pragma once
// IWYU pragma private; include "GlobalNamespace/Teleprompter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Teleprompter)
namespace GlobalNamespace {
class IOccasional;
}
namespace GlobalNamespace {
class LocalizedText;
}
namespace GlobalNamespace {
class OccasionalPartner;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PegTileSequenceGenerator;
}
namespace GlobalNamespace {
struct Prompt_Teleprompter_PromptType;
}
namespace GlobalNamespace {
struct Teleprompter_Prompt;
}
namespace GlobalNamespace {
struct Teleprompter_SequencePrompt;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
// Forward declare root types
namespace GlobalNamespace {
struct Prompt_Teleprompter_PromptType;
}
namespace GlobalNamespace {
class Teleprompter;
}
namespace GlobalNamespace {
struct Teleprompter_Prompt;
}
namespace GlobalNamespace {
struct Teleprompter_SequencePrompt;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Prompt_Teleprompter_PromptType);
MARK_REF_T(::GlobalNamespace::Teleprompter*);
MARK_VAL_T(::GlobalNamespace::Teleprompter_Prompt);
MARK_VAL_T(::GlobalNamespace::Teleprompter_SequencePrompt);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Prompt_Teleprompter_PromptType, "", "Teleprompter/Prompt/PromptType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Teleprompter*, "", "Teleprompter");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Teleprompter_Prompt, "", "Teleprompter/Prompt");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Teleprompter_SequencePrompt, "", "Teleprompter/SequencePrompt");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Teleprompter/Prompt/PromptType
struct CORDL_TYPE Prompt_Teleprompter_PromptType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Prompt_Teleprompter_PromptType_Unwrapped
enum struct __Prompt_Teleprompter_PromptType_Unwrapped : int32_t {
__E_FixedMessage = static_cast<int32_t>(0x0),
__E_SequenceMessage = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Prompt_Teleprompter_PromptType_Unwrapped () const noexcept {
return static_cast<__Prompt_Teleprompter_PromptType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Prompt_Teleprompter_PromptType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Prompt_Teleprompter_PromptType(int32_t  value__) noexcept;

/// @brief Field FixedMessage value: I32(0)
static ::GlobalNamespace::Prompt_Teleprompter_PromptType const FixedMessage;

/// @brief Field SequenceMessage value: I32(1)
static ::GlobalNamespace::Prompt_Teleprompter_PromptType const SequenceMessage;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5125};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Prompt_Teleprompter_PromptType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Prompt_Teleprompter_PromptType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Teleprompter::Prompt::PromptType
namespace GlobalNamespace {
// Is value type: true
// CS Name: Teleprompter/Prompt
struct CORDL_TYPE Teleprompter_Prompt {
public:
// Declarations
using PromptType = ::GlobalNamespace::Prompt_Teleprompter_PromptType;

// Ctor Parameters []
// @brief default ctor
constexpr Teleprompter_Prompt() ;

// Ctor Parameters [CppParam { name: "promptType", ty: "::GlobalNamespace::Prompt_Teleprompter_PromptType", modifiers: "", def_value: None }, CppParam { name: "rawValue", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sequenceIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Teleprompter_Prompt(::GlobalNamespace::Prompt_Teleprompter_PromptType  promptType, ::StringW  rawValue, int32_t  sequenceIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5126};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field promptType, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::Prompt_Teleprompter_PromptType  promptType;

/// @brief Field rawValue, offset: 0x8, size: 0x8, def value: None
 ::StringW  rawValue;

/// @brief Field sequenceIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  sequenceIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Teleprompter_Prompt, promptType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Teleprompter_Prompt, rawValue) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Teleprompter_Prompt, sequenceIndex) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Teleprompter_Prompt) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PropGroup
namespace GlobalNamespace {
// Is value type: true
// CS Name: Teleprompter/SequencePrompt
struct CORDL_TYPE Teleprompter_SequencePrompt {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Teleprompter_SequencePrompt() ;

// Ctor Parameters [CppParam { name: "propGroup", ty: "::GlobalNamespace::PropGroup", modifiers: "", def_value: None }, CppParam { name: "rawValue", ty: "::StringW", modifiers: "", def_value: None }]
constexpr Teleprompter_SequencePrompt(::GlobalNamespace::PropGroup  propGroup, ::StringW  rawValue) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5127};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field propGroup, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::PropGroup  propGroup;

/// @brief Field rawValue, offset: 0x8, size: 0x8, def value: None
 ::StringW  rawValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Teleprompter_SequencePrompt, propGroup) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Teleprompter_SequencePrompt, rawValue) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Teleprompter_SequencePrompt) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Mirror.NetworkBehaviour, PeckSystemReference, Teleprompter::Prompt, Teleprompter::SequencePrompt
namespace GlobalNamespace {
// Is value type: false
// CS Name: Teleprompter
class CORDL_TYPE Teleprompter : public ::Mirror::NetworkBehaviour {
public:
// Declarations
using Prompt = ::GlobalNamespace::Teleprompter_Prompt;

using SequencePrompt = ::GlobalNamespace::Teleprompter_SequencePrompt;

 __declspec(property(get=get_NetworkcurrentPrompt, put=set_NetworkcurrentPrompt)) int32_t  NetworkcurrentPrompt;

/// @brief Field currentPrompt, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentPrompt, put=__cordl_internal_set_currentPrompt)) int32_t  currentPrompt;

/// @brief Field isActiveSystem, offset 0x90, size 0x28 
 __declspec(property(get=__cordl_internal_get_isActiveSystem, put=__cordl_internal_set_isActiveSystem)) ::GlobalNamespace::PeckSystemReference  isActiveSystem;

/// @brief Field logVerbose, offset 0xe4, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field occasionalPartner, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_occasionalPartner, put=__cordl_internal_set_occasionalPartner)) ::UnityW<::GlobalNamespace::OccasionalPartner>  occasionalPartner;

/// @brief Field pokeButton, offset 0x68, size 0x28 
 __declspec(property(get=__cordl_internal_get_pokeButton, put=__cordl_internal_set_pokeButton)) ::GlobalNamespace::PeckSystemReference  pokeButton;

/// @brief Field promptDuration, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_promptDuration, put=__cordl_internal_set_promptDuration)) float_t  promptDuration;

/// @brief Field prompts, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_prompts, put=__cordl_internal_set_prompts)) ::ArrayW<::GlobalNamespace::Teleprompter_Prompt>  prompts;

/// @brief Field sequenceGenerator, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_sequenceGenerator, put=__cordl_internal_set_sequenceGenerator)) ::UnityW<::GlobalNamespace::PegTileSequenceGenerator>  sequenceGenerator;

/// @brief Field sequencePrompts, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_sequencePrompts, put=__cordl_internal_set_sequencePrompts)) ::ArrayW<::GlobalNamespace::Teleprompter_SequencePrompt>  sequencePrompts;

/// @brief Field textField, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_textField, put=__cordl_internal_set_textField)) ::UnityW<::GlobalNamespace::LocalizedText>  textField;

/// @brief Field timeAtChange, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeAtChange, put=__cordl_internal_set_timeAtChange)) float_t  timeAtChange;

/// @brief Convert operator to "::GlobalNamespace::IOccasional"
constexpr operator  ::GlobalNamespace::IOccasional*() noexcept;

/// @brief Method Awake, addr 0x1804180b0, size 0xb0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ButtonPeck, addr 0x180418160, size 0x90, virtual false, abstract: false, final false
inline void ButtonPeck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method DeserializeSyncVars, addr 0x1804181f0, size 0xe0, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method IsActivePeck, addr 0x1804182d0, size 0xb0, virtual false, abstract: false, final false
inline void IsActivePeck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::GlobalNamespace::Teleprompter* New_ctor() ;

/// @brief Method OccasionalUpdate, addr 0x180418380, size 0x60, virtual true, abstract: false, final true
inline void OccasionalUpdate() ;

/// @brief Method Refresh, addr 0x1804183e0, size 0x190, virtual false, abstract: false, final false
inline void Refresh(int32_t  oldValue, int32_t  newValue) ;

/// @brief Method SerializeSyncVars, addr 0x180418570, size 0x50, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method SetPrompt, addr 0x1804185c0, size 0x130, virtual false, abstract: false, final false
inline void SetPrompt(::GlobalNamespace::Teleprompter_Prompt  prompt) ;

constexpr int32_t const& __cordl_internal_get_currentPrompt() const;

constexpr int32_t& __cordl_internal_get_currentPrompt() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_isActiveSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_isActiveSystem() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::OccasionalPartner> const& __cordl_internal_get_occasionalPartner() const;

constexpr ::UnityW<::GlobalNamespace::OccasionalPartner>& __cordl_internal_get_occasionalPartner() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_pokeButton() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_pokeButton() ;

constexpr float_t const& __cordl_internal_get_promptDuration() const;

constexpr float_t& __cordl_internal_get_promptDuration() ;

constexpr ::ArrayW<::GlobalNamespace::Teleprompter_Prompt> const& __cordl_internal_get_prompts() const;

constexpr ::ArrayW<::GlobalNamespace::Teleprompter_Prompt>& __cordl_internal_get_prompts() ;

constexpr ::UnityW<::GlobalNamespace::PegTileSequenceGenerator> const& __cordl_internal_get_sequenceGenerator() const;

constexpr ::UnityW<::GlobalNamespace::PegTileSequenceGenerator>& __cordl_internal_get_sequenceGenerator() ;

constexpr ::ArrayW<::GlobalNamespace::Teleprompter_SequencePrompt> const& __cordl_internal_get_sequencePrompts() const;

constexpr ::ArrayW<::GlobalNamespace::Teleprompter_SequencePrompt>& __cordl_internal_get_sequencePrompts() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get_textField() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get_textField() ;

constexpr float_t const& __cordl_internal_get_timeAtChange() const;

constexpr float_t& __cordl_internal_get_timeAtChange() ;

constexpr void __cordl_internal_set_currentPrompt(int32_t  value) ;

constexpr void __cordl_internal_set_isActiveSystem(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_occasionalPartner(::UnityW<::GlobalNamespace::OccasionalPartner>  value) ;

constexpr void __cordl_internal_set_pokeButton(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_promptDuration(float_t  value) ;

constexpr void __cordl_internal_set_prompts(::ArrayW<::GlobalNamespace::Teleprompter_Prompt>  value) ;

constexpr void __cordl_internal_set_sequenceGenerator(::UnityW<::GlobalNamespace::PegTileSequenceGenerator>  value) ;

constexpr void __cordl_internal_set_sequencePrompts(::ArrayW<::GlobalNamespace::Teleprompter_SequencePrompt>  value) ;

constexpr void __cordl_internal_set_textField(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

constexpr void __cordl_internal_set_timeAtChange(float_t  value) ;

/// @brief Method .ctor, addr 0x1804186f0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NetworkcurrentPrompt, addr 0x180418710, size 0x10, virtual false, abstract: false, final false
inline int32_t get_NetworkcurrentPrompt() ;

/// @brief Convert to "::GlobalNamespace::IOccasional"
constexpr ::GlobalNamespace::IOccasional* i___GlobalNamespace__IOccasional() noexcept;

/// @brief Method set_NetworkcurrentPrompt, addr 0x180418720, size 0x70, virtual false, abstract: false, final false
inline void set_NetworkcurrentPrompt(::ByRefConst<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Teleprompter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Teleprompter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Teleprompter(Teleprompter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Teleprompter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Teleprompter(Teleprompter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5128};

/// @brief Field pokeButton, offset: 0x68, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___pokeButton;

/// @brief Field isActiveSystem, offset: 0x90, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___isActiveSystem;

/// @brief Field textField, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ___textField;

/// @brief Field occasionalPartner, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OccasionalPartner>  ___occasionalPartner;

/// @brief Field sequenceGenerator, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PegTileSequenceGenerator>  ___sequenceGenerator;

/// @brief Field prompts, offset: 0xd0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::Teleprompter_Prompt>  ___prompts;

/// @brief Field sequencePrompts, offset: 0xd8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::Teleprompter_SequencePrompt>  ___sequencePrompts;

/// @brief Field promptDuration, offset: 0xe0, size: 0x4, def value: None
 float_t  ___promptDuration;

/// @brief Field logVerbose, offset: 0xe4, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field timeAtChange, offset: 0xe8, size: 0x4, def value: None
 float_t  ___timeAtChange;

/// @brief Field currentPrompt, offset: 0xec, size: 0x4, def value: None
 int32_t  ___currentPrompt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Teleprompter, ___pokeButton) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Teleprompter, ___isActiveSystem) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Teleprompter, ___textField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Teleprompter, ___occasionalPartner) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Teleprompter, ___sequenceGenerator) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Teleprompter, ___prompts) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Teleprompter, ___sequencePrompts) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Teleprompter, ___promptDuration) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Teleprompter, ___logVerbose) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Teleprompter, ___timeAtChange) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Teleprompter, ___currentPrompt) == 0xec, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Teleprompter) == 0xf0, "Size mismatch!");

} // namespace end def GlobalNamespace
