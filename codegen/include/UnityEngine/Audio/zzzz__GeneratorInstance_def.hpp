#pragma once
// IWYU pragma private; include "UnityEngine/Audio/GeneratorInstance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorHeader_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_def.hpp"
#include "UnityEngine/zzzz__AudioSpeakerMode_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GeneratorInstance)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace Unity::IntegerTime {
struct DiscreteTime;
}
namespace UnityEngine::Audio {
struct GeneratorInstance_Configuration;
}
namespace UnityEngine::Audio {
struct GeneratorInstance_GeneratorHeader;
}
namespace UnityEngine::Audio {
class GeneratorInstance_ICapabilities;
}
namespace UnityEngine::Audio {
struct GeneratorInstance_Properties;
}
namespace UnityEngine::Audio {
struct GeneratorInstance_Setup;
}
namespace UnityEngine::Audio {
struct ProcessorInstance;
}
// Forward declare root types
namespace UnityEngine::Audio {
class GeneratorInstance_ICapabilities;
}
namespace UnityEngine::Audio {
struct GeneratorInstance;
}
namespace UnityEngine::Audio {
struct GeneratorInstance_Configuration;
}
namespace UnityEngine::Audio {
struct GeneratorInstance_GeneratorHeader;
}
namespace UnityEngine::Audio {
struct GeneratorInstance_Properties;
}
namespace UnityEngine::Audio {
struct GeneratorInstance_Setup;
}
// Write type traits
MARK_REF_T(::UnityEngine::Audio::GeneratorInstance_ICapabilities*);
MARK_VAL_T(::UnityEngine::Audio::GeneratorInstance);
MARK_VAL_T(::UnityEngine::Audio::GeneratorInstance_Configuration);
MARK_VAL_T(::UnityEngine::Audio::GeneratorInstance_GeneratorHeader);
MARK_VAL_T(::UnityEngine::Audio::GeneratorInstance_Properties);
MARK_VAL_T(::UnityEngine::Audio::GeneratorInstance_Setup);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::GeneratorInstance_ICapabilities*, "UnityEngine.Audio", "GeneratorInstance/ICapabilities");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::GeneratorInstance, "UnityEngine.Audio", "GeneratorInstance");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::GeneratorInstance_Configuration, "UnityEngine.Audio", "GeneratorInstance/Configuration");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::GeneratorInstance_GeneratorHeader, "UnityEngine.Audio", "GeneratorInstance/GeneratorHeader");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::GeneratorInstance_Properties, "UnityEngine.Audio", "GeneratorInstance/Properties");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::GeneratorInstance_Setup, "UnityEngine.Audio", "GeneratorInstance/Setup");
// Dependencies 
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.GeneratorInstance/ICapabilities
class CORDL_TYPE GeneratorInstance_ICapabilities {
public:
// Declarations
 __declspec(property(get=get_isFinite)) bool  isFinite;

 __declspec(property(get=get_isRealtime)) bool  isRealtime;

 __declspec(property(get=get_length)) ::System::Nullable_1<::Unity::IntegerTime::DiscreteTime>  length;

/// @brief Method get_isFinite, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_isFinite() ;

/// @brief Method get_isRealtime, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_isRealtime() ;

/// @brief Method get_length, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Nullable_1<::Unity::IntegerTime::DiscreteTime> get_length() ;

// Ctor Parameters [CppParam { name: "", ty: "GeneratorInstance_ICapabilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GeneratorInstance_ICapabilities(GeneratorInstance_ICapabilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20481};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Audio
// Dependencies UnityEngine.AudioSpeakerMode
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.GeneratorInstance/Setup
struct CORDL_TYPE GeneratorInstance_Setup {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GeneratorInstance_Setup() ;

// Ctor Parameters [CppParam { name: "speakerMode", ty: "::UnityEngine::AudioSpeakerMode", modifiers: "", def_value: None }, CppParam { name: "sampleRate", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GeneratorInstance_Setup(::UnityEngine::AudioSpeakerMode  speakerMode, int32_t  sampleRate) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20482};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field speakerMode, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::AudioSpeakerMode  speakerMode;

/// @brief Field sampleRate, offset: 0x4, size: 0x4, def value: None
 int32_t  sampleRate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::GeneratorInstance_Setup, speakerMode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::GeneratorInstance_Setup, sampleRate) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::GeneratorInstance_Setup) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine::Audio
// Dependencies 
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.GeneratorInstance/Properties
struct CORDL_TYPE GeneratorInstance_Properties {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GeneratorInstance_Properties() ;

// Ctor Parameters [CppParam { name: "m_Reserved", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr GeneratorInstance_Properties(uint8_t  m_Reserved) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20483};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field m_Reserved, offset: 0x0, size: 0x1, def value: None
 uint8_t  m_Reserved;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::GeneratorInstance_Properties, m_Reserved) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::GeneratorInstance_Properties) == 0x1, "Size mismatch!");

} // namespace end def UnityEngine::Audio
// Dependencies Unity.IntegerTime.DiscreteTime, UnityEngine.Audio.GeneratorInstance::Properties, UnityEngine.Audio.GeneratorInstance::Setup
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.GeneratorInstance/Configuration
struct CORDL_TYPE GeneratorInstance_Configuration {
public:
// Declarations
 __declspec(property(get=get_isRealtime)) bool  isRealtime;

 __declspec(property(get=get_length)) ::System::Nullable_1<::Unity::IntegerTime::DiscreteTime>  length;

/// @brief Method get_isRealtime, addr 0x1814f8710, size 0x10, virtual false, abstract: false, final false
inline bool get_isRealtime() ;

/// @brief Method get_length, addr 0x18223b840, size 0xf0, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Unity::IntegerTime::DiscreteTime> get_length() ;

// Ctor Parameters []
// @brief default ctor
constexpr GeneratorInstance_Configuration() ;

// Ctor Parameters [CppParam { name: "Setup", ty: "::UnityEngine::Audio::GeneratorInstance_Setup", modifiers: "", def_value: None }, CppParam { name: "Properties", ty: "::UnityEngine::Audio::GeneratorInstance_Properties", modifiers: "", def_value: None }, CppParam { name: "ReportedLength", ty: "::Unity::IntegerTime::DiscreteTime", modifiers: "", def_value: None }, CppParam { name: "IsFinite", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "IsRealtime", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "HasKnownLength", ty: "bool", modifiers: "", def_value: None }]
constexpr GeneratorInstance_Configuration(::UnityEngine::Audio::GeneratorInstance_Setup  Setup, ::UnityEngine::Audio::GeneratorInstance_Properties  Properties, ::Unity::IntegerTime::DiscreteTime  ReportedLength, bool  IsFinite, bool  IsRealtime, bool  HasKnownLength) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20484};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Setup, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Audio::GeneratorInstance_Setup  Setup;

/// @brief Field Properties, offset: 0x8, size: 0x1, def value: None
 ::UnityEngine::Audio::GeneratorInstance_Properties  Properties;

/// @brief Field ReportedLength, offset: 0x10, size: 0x8, def value: None
 ::Unity::IntegerTime::DiscreteTime  ReportedLength;

/// @brief Field IsFinite, offset: 0x18, size: 0x1, def value: None
 bool  IsFinite;

/// @brief Field IsRealtime, offset: 0x19, size: 0x1, def value: None
 bool  IsRealtime;

/// @brief Field HasKnownLength, offset: 0x1a, size: 0x1, def value: None
 bool  HasKnownLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::GeneratorInstance_Configuration, Setup) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::GeneratorInstance_Configuration, Properties) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::GeneratorInstance_Configuration, ReportedLength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::GeneratorInstance_Configuration, IsFinite) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::GeneratorInstance_Configuration, IsRealtime) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::GeneratorInstance_Configuration, HasKnownLength) == 0x1a, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::GeneratorInstance_Configuration) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Audio
// Dependencies UnityEngine.Audio.GeneratorInstance::Configuration, UnityEngine.Audio.ProcessorHeader
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.GeneratorInstance/GeneratorHeader
struct CORDL_TYPE GeneratorInstance_GeneratorHeader {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GeneratorInstance_GeneratorHeader() ;

// Ctor Parameters [CppParam { name: "Processor", ty: "::UnityEngine::Audio::ProcessorHeader", modifiers: "", def_value: None }, CppParam { name: "Configuration", ty: "::UnityEngine::Audio::GeneratorInstance_Configuration", modifiers: "", def_value: None }]
constexpr GeneratorInstance_GeneratorHeader(::UnityEngine::Audio::ProcessorHeader  Processor, ::UnityEngine::Audio::GeneratorInstance_Configuration  Configuration) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20485};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field Processor, offset: 0x0, size: 0x38, def value: None
 ::UnityEngine::Audio::ProcessorHeader  Processor;

/// @brief Field Configuration, offset: 0x38, size: 0x20, def value: None
 ::UnityEngine::Audio::GeneratorInstance_Configuration  Configuration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::GeneratorInstance_GeneratorHeader, Processor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::GeneratorInstance_GeneratorHeader, Configuration) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::GeneratorInstance_GeneratorHeader) == 0x58, "Size mismatch!");

} // namespace end def UnityEngine::Audio
// Dependencies UnityEngine.Audio.ProcessorInstance
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.GeneratorInstance
struct CORDL_TYPE GeneratorInstance {
public:
// Declarations
using Configuration = ::UnityEngine::Audio::GeneratorInstance_Configuration;

using GeneratorHeader = ::UnityEngine::Audio::GeneratorInstance_GeneratorHeader;

using ICapabilities = ::UnityEngine::Audio::GeneratorInstance_ICapabilities;

using Properties = ::UnityEngine::Audio::GeneratorInstance_Properties;

using Setup = ::UnityEngine::Audio::GeneratorInstance_Setup;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Audio::GeneratorInstance>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Audio::GeneratorInstance>*() ;

/// @brief Method Equals, addr 0x18223bc50, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x18223bbe0, size 0x70, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Audio::GeneratorInstance  other) ;

/// @brief Method GetHashCode, addr 0x180bbb260, size 0x14e50, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Audio::GeneratorInstance>"
constexpr ::System::IEquatable_1<::UnityEngine::Audio::GeneratorInstance>* i___System__IEquatable_1___UnityEngine__Audio__GeneratorInstance_() ;

/// @brief Method op_Implicit, addr 0x180503ad0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Audio::ProcessorInstance op_Implicit___UnityEngine__Audio__ProcessorInstance(::by_ref<::UnityEngine::Audio::GeneratorInstance>  generatorInstance) ;

// Ctor Parameters []
// @brief default ctor
constexpr GeneratorInstance() ;

// Ctor Parameters [CppParam { name: "m_ProcessorInstance", ty: "::UnityEngine::Audio::ProcessorInstance", modifiers: "", def_value: None }]
constexpr GeneratorInstance(::UnityEngine::Audio::ProcessorInstance  m_ProcessorInstance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20486};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ProcessorInstance, offset: 0x0, size: 0x18, def value: None
 ::UnityEngine::Audio::ProcessorInstance  m_ProcessorInstance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::GeneratorInstance, m_ProcessorInstance) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::GeneratorInstance) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Audio
