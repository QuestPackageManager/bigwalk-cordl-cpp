#pragma once
// IWYU pragma private; include "GlobalNamespace/BasicDelay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioFilterBase_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BasicDelay)
namespace GlobalNamespace {
struct BasicDelay_DelayState;
}
namespace GlobalNamespace {
class BasicDelay_Process_00000486$BurstDirectCall;
}
namespace GlobalNamespace {
class BasicDelay_Process_00000486$PostfixBurstDelegate;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class BasicDelay;
}
namespace GlobalNamespace {
class BasicDelay_Process_00000486$BurstDirectCall;
}
namespace GlobalNamespace {
class BasicDelay_Process_00000486$PostfixBurstDelegate;
}
namespace GlobalNamespace {
struct BasicDelay_DelayState;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BasicDelay*);
MARK_REF_T(::GlobalNamespace::BasicDelay_Process_00000486$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate*);
MARK_VAL_T(::GlobalNamespace::BasicDelay_DelayState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BasicDelay*, "", "BasicDelay");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BasicDelay_Process_00000486$BurstDirectCall*, "", "BasicDelay/Process_00000486$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate*, "", "BasicDelay/Process_00000486$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BasicDelay_DelayState, "", "BasicDelay/DelayState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BasicDelay/DelayState
struct CORDL_TYPE BasicDelay_DelayState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BasicDelay_DelayState() ;

// Ctor Parameters [CppParam { name: "WriteHead", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "CrossfadePosition", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "CrossfadeIncrement", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "IsDelayChanging", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "OldDelayLength", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "DelayLength", ty: "float_t", modifiers: "", def_value: None }]
constexpr BasicDelay_DelayState(int32_t  WriteHead, float_t  CrossfadePosition, float_t  CrossfadeIncrement, int32_t  IsDelayChanging, float_t  OldDelayLength, float_t  DelayLength) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17601};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field WriteHead, offset: 0x0, size: 0x4, def value: None
 int32_t  WriteHead;

/// @brief Field CrossfadePosition, offset: 0x4, size: 0x4, def value: None
 float_t  CrossfadePosition;

/// @brief Field CrossfadeIncrement, offset: 0x8, size: 0x4, def value: None
 float_t  CrossfadeIncrement;

/// @brief Field IsDelayChanging, offset: 0xc, size: 0x4, def value: None
 int32_t  IsDelayChanging;

/// @brief Field OldDelayLength, offset: 0x10, size: 0x4, def value: None
 float_t  OldDelayLength;

/// @brief Field DelayLength, offset: 0x14, size: 0x4, def value: None
 float_t  DelayLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BasicDelay_DelayState, WriteHead) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicDelay_DelayState, CrossfadePosition) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicDelay_DelayState, CrossfadeIncrement) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicDelay_DelayState, IsDelayChanging) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicDelay_DelayState, OldDelayLength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicDelay_DelayState, DelayLength) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BasicDelay_DelayState) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: BasicDelay/Process_00000486$PostfixBurstDelegate
class CORDL_TYPE BasicDelay_Process_00000486$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1804a2c40, size 0x110, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(float_t*  data, int32_t  dataLength, int32_t  channels, float_t*  delayBuffers, int32_t  bufferLength, int32_t  bufferMask, float_t  decayRatio, float_t  dryMix, float_t  wetMix, ::by_ref<::GlobalNamespace::BasicDelay_DelayState>  state, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_11) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1804a2d50, size 0x290, virtual true, abstract: false, final false
inline void Invoke(float_t*  data, int32_t  dataLength, int32_t  channels, float_t*  delayBuffers, int32_t  bufferLength, int32_t  bufferMask, float_t  decayRatio, float_t  dryMix, float_t  wetMix, ::by_ref<::GlobalNamespace::BasicDelay_DelayState>  state) ;

static inline ::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1804a2fe0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BasicDelay_Process_00000486$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BasicDelay_Process_00000486$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicDelay_Process_00000486$PostfixBurstDelegate(BasicDelay_Process_00000486$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicDelay_Process_00000486$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicDelay_Process_00000486$PostfixBurstDelegate(BasicDelay_Process_00000486$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17602};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BasicDelay/Process_00000486$BurstDirectCall
class CORDL_TYPE BasicDelay_Process_00000486$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x1804a2b20, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x1804a29f0, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x18049c1b0, size 0x230, virtual false, abstract: false, final false
static inline void Invoke(float_t*  data, int32_t  dataLength, int32_t  channels, float_t*  delayBuffers, int32_t  bufferLength, int32_t  bufferMask, float_t  decayRatio, float_t  dryMix, float_t  wetMix, ::by_ref<::GlobalNamespace::BasicDelay_DelayState>  state) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BasicDelay_Process_00000486$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BasicDelay_Process_00000486$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicDelay_Process_00000486$BurstDirectCall(BasicDelay_Process_00000486$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicDelay_Process_00000486$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicDelay_Process_00000486$BurstDirectCall(BasicDelay_Process_00000486$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17603};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BasicDelay_Process_00000486$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies AudioFilterBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: BasicDelay
class CORDL_TYPE BasicDelay : public ::GlobalNamespace::AudioFilterBase {
public:
// Declarations
using DelayState = ::GlobalNamespace::BasicDelay_DelayState;

using Process_00000486$BurstDirectCall = ::GlobalNamespace::BasicDelay_Process_00000486$BurstDirectCall;

using Process_00000486$PostfixBurstDelegate = ::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate;

 __declspec(property(get=get_Bypass, put=set_Bypass)) bool  Bypass;

/// @brief Field DebugBypass, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_DebugBypass, put=setStaticF_DebugBypass)) bool  DebugBypass;

 __declspec(property(get=get_DecayRatio, put=set_DecayRatio)) float_t  DecayRatio;

 __declspec(property(get=get_Delay, put=set_Delay)) int32_t  Delay;

 __declspec(property(get=get_DryMix, put=set_DryMix)) float_t  DryMix;

 __declspec(property(get=get_InternalBypass, put=set_InternalBypass)) bool  InternalBypass;

 __declspec(property(get=get_WetMix, put=set_WetMix)) float_t  WetMix;

/// @brief Field _bufferLength, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__bufferLength, put=__cordl_internal_set__bufferLength)) int32_t  _bufferLength;

/// @brief Field _bufferMask, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__bufferMask, put=__cordl_internal_set__bufferMask)) int32_t  _bufferMask;

/// @brief Field _bypass, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__bypass, put=__cordl_internal_set__bypass)) bool  _bypass;

/// @brief Field _channels, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__channels, put=__cordl_internal_set__channels)) int32_t  _channels;

/// @brief Field _crossfadeIncrement, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__crossfadeIncrement, put=__cordl_internal_set__crossfadeIncrement)) float_t  _crossfadeIncrement;

/// @brief Field _crossfadePosition, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__crossfadePosition, put=__cordl_internal_set__crossfadePosition)) float_t  _crossfadePosition;

/// @brief Field _decayRatio, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__decayRatio, put=__cordl_internal_set__decayRatio)) float_t  _decayRatio;

/// @brief Field _delay, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__delay, put=__cordl_internal_set__delay)) int32_t  _delay;

/// @brief Field _delayBufferLength, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__delayBufferLength, put=__cordl_internal_set__delayBufferLength)) float_t  _delayBufferLength;

/// @brief Field _delayBuffers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__delayBuffers, put=__cordl_internal_set__delayBuffers)) ::ArrayW<float_t>  _delayBuffers;

/// @brief Field _dryMix, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__dryMix, put=__cordl_internal_set__dryMix)) float_t  _dryMix;

/// @brief Field _internalBypass, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__internalBypass, put=__cordl_internal_set__internalBypass)) bool  _internalBypass;

/// @brief Field _isDelayChanging, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDelayChanging, put=__cordl_internal_set__isDelayChanging)) bool  _isDelayChanging;

/// @brief Field _oldDelayBufferLength, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__oldDelayBufferLength, put=__cordl_internal_set__oldDelayBufferLength)) float_t  _oldDelayBufferLength;

/// @brief Field _sampleRate, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__sampleRate, put=__cordl_internal_set__sampleRate)) int32_t  _sampleRate;

/// @brief Field _wetMix, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__wetMix, put=__cordl_internal_set__wetMix)) float_t  _wetMix;

/// @brief Field _writeHead, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__writeHead, put=__cordl_internal_set__writeHead)) int32_t  _writeHead;

/// @brief Method Awake, addr 0x18049bdb0, size 0x120, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Init, addr 0x18049bed0, size 0xb0, virtual false, abstract: false, final false
inline void Init() ;

static inline ::GlobalNamespace::BasicDelay* New_ctor() ;

/// @brief Method Process, addr 0x18049c1b0, size 0x230, virtual false, abstract: false, final false
static inline void Process(float_t*  data, int32_t  dataLength, int32_t  channels, float_t*  delayBuffers, int32_t  bufferLength, int32_t  bufferMask, float_t  decayRatio, float_t  dryMix, float_t  wetMix, ::by_ref<::GlobalNamespace::BasicDelay_DelayState>  state) ;

/// @brief Method Process$BurstManaged, addr 0x180497f40, size 0xb20, virtual false, abstract: false, final false
static inline void Process$BurstManaged(float_t*  data, int32_t  dataLength, int32_t  channels, float_t*  delayBuffers, int32_t  bufferLength, int32_t  bufferMask, float_t  decayRatio, float_t  dryMix, float_t  wetMix, ::by_ref<::GlobalNamespace::BasicDelay_DelayState>  state) ;

/// @brief Method ProcessSamples, addr 0x18049bf80, size 0x230, virtual true, abstract: false, final false
inline void ProcessSamples(::by_ref<::ArrayW<float_t>>  data, int32_t  channels) ;

/// @brief Method UpdateVariables, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void UpdateVariables(float_t  deltaTime) ;

constexpr int32_t const& __cordl_internal_get__bufferLength() const;

constexpr int32_t& __cordl_internal_get__bufferLength() ;

constexpr int32_t const& __cordl_internal_get__bufferMask() const;

constexpr int32_t& __cordl_internal_get__bufferMask() ;

constexpr bool const& __cordl_internal_get__bypass() const;

constexpr bool& __cordl_internal_get__bypass() ;

constexpr int32_t const& __cordl_internal_get__channels() const;

constexpr int32_t& __cordl_internal_get__channels() ;

constexpr float_t const& __cordl_internal_get__crossfadeIncrement() const;

constexpr float_t& __cordl_internal_get__crossfadeIncrement() ;

constexpr float_t const& __cordl_internal_get__crossfadePosition() const;

constexpr float_t& __cordl_internal_get__crossfadePosition() ;

constexpr float_t const& __cordl_internal_get__decayRatio() const;

constexpr float_t& __cordl_internal_get__decayRatio() ;

constexpr int32_t const& __cordl_internal_get__delay() const;

constexpr int32_t& __cordl_internal_get__delay() ;

constexpr float_t const& __cordl_internal_get__delayBufferLength() const;

constexpr float_t& __cordl_internal_get__delayBufferLength() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__delayBuffers() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__delayBuffers() ;

constexpr float_t const& __cordl_internal_get__dryMix() const;

constexpr float_t& __cordl_internal_get__dryMix() ;

constexpr bool const& __cordl_internal_get__internalBypass() const;

constexpr bool& __cordl_internal_get__internalBypass() ;

constexpr bool const& __cordl_internal_get__isDelayChanging() const;

constexpr bool& __cordl_internal_get__isDelayChanging() ;

constexpr float_t const& __cordl_internal_get__oldDelayBufferLength() const;

constexpr float_t& __cordl_internal_get__oldDelayBufferLength() ;

constexpr int32_t const& __cordl_internal_get__sampleRate() const;

constexpr int32_t& __cordl_internal_get__sampleRate() ;

constexpr float_t const& __cordl_internal_get__wetMix() const;

constexpr float_t& __cordl_internal_get__wetMix() ;

constexpr int32_t const& __cordl_internal_get__writeHead() const;

constexpr int32_t& __cordl_internal_get__writeHead() ;

constexpr void __cordl_internal_set__bufferLength(int32_t  value) ;

constexpr void __cordl_internal_set__bufferMask(int32_t  value) ;

constexpr void __cordl_internal_set__bypass(bool  value) ;

constexpr void __cordl_internal_set__channels(int32_t  value) ;

constexpr void __cordl_internal_set__crossfadeIncrement(float_t  value) ;

constexpr void __cordl_internal_set__crossfadePosition(float_t  value) ;

constexpr void __cordl_internal_set__decayRatio(float_t  value) ;

constexpr void __cordl_internal_set__delay(int32_t  value) ;

constexpr void __cordl_internal_set__delayBufferLength(float_t  value) ;

constexpr void __cordl_internal_set__delayBuffers(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__dryMix(float_t  value) ;

constexpr void __cordl_internal_set__internalBypass(bool  value) ;

constexpr void __cordl_internal_set__isDelayChanging(bool  value) ;

constexpr void __cordl_internal_set__oldDelayBufferLength(float_t  value) ;

constexpr void __cordl_internal_set__sampleRate(int32_t  value) ;

constexpr void __cordl_internal_set__wetMix(float_t  value) ;

constexpr void __cordl_internal_set__writeHead(int32_t  value) ;

/// @brief Method .ctor, addr 0x18049c3e0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_DebugBypass() ;

/// @brief Method get_Bypass, addr 0x18049c410, size 0x10, virtual true, abstract: false, final false
inline bool get_Bypass() ;

/// @brief Method get_DecayRatio, addr 0x1802f80d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_DecayRatio() ;

/// @brief Method get_Delay, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Delay() ;

/// @brief Method get_DryMix, addr 0x1803f2be0, size 0x10, virtual false, abstract: false, final false
inline float_t get_DryMix() ;

/// @brief Method get_InternalBypass, addr 0x1803561b0, size 0x10, virtual true, abstract: false, final false
inline bool get_InternalBypass() ;

/// @brief Method get_WetMix, addr 0x18049a530, size 0x10, virtual false, abstract: false, final false
inline float_t get_WetMix() ;

static inline void setStaticF_DebugBypass(bool  value) ;

/// @brief Method set_Bypass, addr 0x18049c420, size 0x10, virtual true, abstract: false, final false
inline void set_Bypass(bool  value) ;

/// @brief Method set_DecayRatio, addr 0x18049c430, size 0x30, virtual false, abstract: false, final false
inline void set_DecayRatio(float_t  value) ;

/// @brief Method set_Delay, addr 0x18049c460, size 0x20, virtual false, abstract: false, final false
inline void set_Delay(int32_t  value) ;

/// @brief Method set_DryMix, addr 0x18049a6b0, size 0x30, virtual false, abstract: false, final false
inline void set_DryMix(float_t  value) ;

/// @brief Method set_InternalBypass, addr 0x180499eb0, size 0x10, virtual true, abstract: false, final false
inline void set_InternalBypass(bool  value) ;

/// @brief Method set_WetMix, addr 0x18049a680, size 0x30, virtual false, abstract: false, final false
inline void set_WetMix(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BasicDelay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BasicDelay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicDelay(BasicDelay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicDelay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicDelay(BasicDelay const& ) = delete;

/// @brief Field DENORMAL_THRESHOLD offset 0xffffffff size 0x4
static constexpr float_t  DENORMAL_THRESHOLD{static_cast<float_t>(1.18e-38f)};

/// @brief Field MAX_DELAY offset 0xffffffff size 0x4
static constexpr int32_t  MAX_DELAY{static_cast<int32_t>(0x1388)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17604};

/// @brief Field _delay, offset: 0x20, size: 0x4, def value: None
 int32_t  ____delay;

/// @brief Field _decayRatio, offset: 0x24, size: 0x4, def value: None
 float_t  ____decayRatio;

/// @brief Field _dryMix, offset: 0x28, size: 0x4, def value: None
 float_t  ____dryMix;

/// @brief Field _wetMix, offset: 0x2c, size: 0x4, def value: None
 float_t  ____wetMix;

/// @brief Field _internalBypass, offset: 0x30, size: 0x1, def value: None
 bool  ____internalBypass;

/// @brief Field _bypass, offset: 0x31, size: 0x1, def value: None
 bool  ____bypass;

/// @brief Field _delayBuffers, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<float_t>  ____delayBuffers;

/// @brief Field _bufferLength, offset: 0x40, size: 0x4, def value: None
 int32_t  ____bufferLength;

/// @brief Field _bufferMask, offset: 0x44, size: 0x4, def value: None
 int32_t  ____bufferMask;

/// @brief Field _channels, offset: 0x48, size: 0x4, def value: None
 int32_t  ____channels;

/// @brief Field _sampleRate, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____sampleRate;

/// @brief Field _writeHead, offset: 0x50, size: 0x4, def value: None
 int32_t  ____writeHead;

/// @brief Field _isDelayChanging, offset: 0x54, size: 0x1, def value: None
 bool  ____isDelayChanging;

/// @brief Field _crossfadePosition, offset: 0x58, size: 0x4, def value: None
 float_t  ____crossfadePosition;

/// @brief Field _crossfadeIncrement, offset: 0x5c, size: 0x4, def value: None
 float_t  ____crossfadeIncrement;

/// @brief Field _oldDelayBufferLength, offset: 0x60, size: 0x4, def value: None
 float_t  ____oldDelayBufferLength;

/// @brief Field _delayBufferLength, offset: 0x64, size: 0x4, def value: None
 float_t  ____delayBufferLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BasicDelay, ____delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicDelay, ____decayRatio) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicDelay, ____dryMix) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicDelay, ____wetMix) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicDelay, ____internalBypass) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicDelay, ____bypass) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicDelay, ____delayBuffers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicDelay, ____bufferLength) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicDelay, ____bufferMask) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicDelay, ____channels) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicDelay, ____sampleRate) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicDelay, ____writeHead) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicDelay, ____isDelayChanging) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicDelay, ____crossfadePosition) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicDelay, ____crossfadeIncrement) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicDelay, ____oldDelayBufferLength) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicDelay, ____delayBufferLength) == 0x64, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BasicDelay) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
