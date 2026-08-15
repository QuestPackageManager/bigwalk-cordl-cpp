#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/IMicrophoneDeviceList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IMicrophoneDeviceList)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Dissonance::Audio::Capture {
class IMicrophoneDeviceList;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Capture::IMicrophoneDeviceList*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::IMicrophoneDeviceList*, "Dissonance.Audio.Capture", "IMicrophoneDeviceList");
// Dependencies 
namespace Dissonance::Audio::Capture {
// Is value type: false
// CS Name: Dissonance.Audio.Capture.IMicrophoneDeviceList
class CORDL_TYPE IMicrophoneDeviceList {
public:
// Declarations
/// @brief Method GetDevices, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void GetDevices(::System::Collections::Generic::List_1<::StringW>*  output) ;

// Ctor Parameters [CppParam { name: "", ty: "IMicrophoneDeviceList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMicrophoneDeviceList(IMicrophoneDeviceList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17031};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Audio::Capture
