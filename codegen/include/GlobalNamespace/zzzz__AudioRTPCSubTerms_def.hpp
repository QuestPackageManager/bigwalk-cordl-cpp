#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioRTPCSubTerms.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioRTPCTerm_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(AudioRTPCSubTerms)
namespace GlobalNamespace {
struct AudioRTPCTerm_TermType;
}
namespace GlobalNamespace {
class AudioRTPCTerm;
}
namespace GlobalNamespace {
struct AudioRTPCY;
}
namespace GlobalNamespace {
struct AudioRTPC_YAxisType;
}
namespace GlobalNamespace {
class IAudioRTPCValue;
}
namespace GlobalNamespace {
class IAudioRTPCXProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioRTPCSubTerms;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioRTPCSubTerms*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioRTPCSubTerms*, "", "AudioRTPCSubTerms");
// Dependencies AudioRTPC::YAxisType, AudioRTPCTerm, AudioRTPCTerm::TermType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioRTPCSubTerms
class CORDL_TYPE AudioRTPCSubTerms : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_SubTerms)) ::ArrayW<::GlobalNamespace::AudioRTPCTerm*>  SubTerms;

 __declspec(property(get=get_Type)) ::GlobalNamespace::AudioRTPCTerm_TermType  Type;

 __declspec(property(get=get_YAxis, put=set_YAxis)) ::GlobalNamespace::AudioRTPC_YAxisType  YAxis;

/// @brief Field _subTerms, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__subTerms, put=__cordl_internal_set__subTerms)) ::ArrayW<::GlobalNamespace::AudioRTPCTerm*>  _subTerms;

/// @brief Field _type, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__type, put=__cordl_internal_set__type)) ::GlobalNamespace::AudioRTPCTerm_TermType  _type;

/// @brief Field _yAxis, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__yAxis, put=__cordl_internal_set__yAxis)) ::GlobalNamespace::AudioRTPC_YAxisType  _yAxis;

/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCValue"
constexpr operator  ::GlobalNamespace::IAudioRTPCValue*() noexcept;

/// @brief Method ChangeSubTerms, addr 0x18048b610, size 0x20, virtual false, abstract: false, final false
inline void ChangeSubTerms(::GlobalNamespace::AudioRTPCTerm_TermType  termType, ::GlobalNamespace::AudioRTPC_YAxisType  yType, ::ArrayW<::GlobalNamespace::AudioRTPCTerm*>  subTerms) ;

/// @brief Method GetValue, addr 0x18048b630, size 0x340, virtual true, abstract: false, final true
inline ::GlobalNamespace::AudioRTPCY GetValue(::GlobalNamespace::IAudioRTPCXProvider*  xProvider) ;

static inline ::GlobalNamespace::AudioRTPCSubTerms* New_ctor(::GlobalNamespace::AudioRTPCTerm_TermType  termType, ::GlobalNamespace::AudioRTPC_YAxisType  yType) ;

constexpr ::ArrayW<::GlobalNamespace::AudioRTPCTerm*> const& __cordl_internal_get__subTerms() const;

constexpr ::ArrayW<::GlobalNamespace::AudioRTPCTerm*>& __cordl_internal_get__subTerms() ;

constexpr ::GlobalNamespace::AudioRTPCTerm_TermType const& __cordl_internal_get__type() const;

constexpr ::GlobalNamespace::AudioRTPCTerm_TermType& __cordl_internal_get__type() ;

constexpr ::GlobalNamespace::AudioRTPC_YAxisType const& __cordl_internal_get__yAxis() const;

constexpr ::GlobalNamespace::AudioRTPC_YAxisType& __cordl_internal_get__yAxis() ;

constexpr void __cordl_internal_set__subTerms(::ArrayW<::GlobalNamespace::AudioRTPCTerm*>  value) ;

constexpr void __cordl_internal_set__type(::GlobalNamespace::AudioRTPCTerm_TermType  value) ;

constexpr void __cordl_internal_set__yAxis(::GlobalNamespace::AudioRTPC_YAxisType  value) ;

/// @brief Method .ctor, addr 0x18048b970, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AudioRTPCTerm_TermType  termType, ::GlobalNamespace::AudioRTPC_YAxisType  yType) ;

/// @brief Method get_SubTerms, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::AudioRTPCTerm*> get_SubTerms() ;

/// @brief Method get_Type, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioRTPCTerm_TermType get_Type() ;

/// @brief Method get_YAxis, addr 0x180303b50, size 0x10, virtual true, abstract: false, final true
inline ::GlobalNamespace::AudioRTPC_YAxisType get_YAxis() ;

/// @brief Convert to "::GlobalNamespace::IAudioRTPCValue"
constexpr ::GlobalNamespace::IAudioRTPCValue* i___GlobalNamespace__IAudioRTPCValue() noexcept;

/// @brief Method set_YAxis, addr 0x180378ff0, size 0x10, virtual true, abstract: false, final true
inline void set_YAxis(::GlobalNamespace::AudioRTPC_YAxisType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioRTPCSubTerms() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioRTPCSubTerms", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioRTPCSubTerms(AudioRTPCSubTerms && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioRTPCSubTerms", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioRTPCSubTerms(AudioRTPCSubTerms const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17560};

/// @brief Field _yAxis, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::AudioRTPC_YAxisType  ____yAxis;

/// @brief Field _type, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::AudioRTPCTerm_TermType  ____type;

/// @brief Field _subTerms, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AudioRTPCTerm*>  ____subTerms;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioRTPCSubTerms, ____yAxis) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRTPCSubTerms, ____type) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRTPCSubTerms, ____subTerms) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioRTPCSubTerms) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
