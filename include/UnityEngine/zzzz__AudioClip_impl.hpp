#pragma once
// IWYU pragma private; include "UnityEngine/AudioClip.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Audio/zzzz__AudioResource_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioFormat_def.hpp"
#include "UnityEngine/Audio/zzzz__ControlContext_def.hpp"
#include "UnityEngine/Audio/zzzz__GeneratorInstance_def.hpp"
#include "UnityEngine/Audio/zzzz__IAudioGenerator_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioDataLoadState_def.hpp"
//  Writing Method size for method: ::UnityEngine::AudioClip_PCMReaderCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioClip_PCMReaderCallback::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::AudioClip_PCMReaderCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip_PCMReaderCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip_PCMReaderCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioClip_PCMReaderCallback::*)(::ArrayW<float_t>)>(&::UnityEngine::AudioClip_PCMReaderCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AudioClip_PCMReaderCallback*>(),
                    {::i2c::class_of<::UnityEngine::AudioClip_PCMReaderCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::AudioClip_PCMReaderCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip_PCMReaderCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::AudioClip_PCMReaderCallback::Invoke(::ArrayW<float_t>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AudioClip_PCMReaderCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::UnityEngine::AudioClip_PCMReaderCallback* UnityEngine::AudioClip_PCMReaderCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AudioClip_PCMReaderCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::AudioClip_PCMReaderCallback::AudioClip_PCMReaderCallback()   {
}
//  Writing Method size for method: ::UnityEngine::AudioClip_PCMSetPositionCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioClip_PCMSetPositionCallback::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::AudioClip_PCMSetPositionCallback::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180539220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip_PCMSetPositionCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip_PCMSetPositionCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioClip_PCMSetPositionCallback::*)(int32_t)>(&::UnityEngine::AudioClip_PCMSetPositionCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AudioClip_PCMSetPositionCallback*>(),
                    {::i2c::class_of<::UnityEngine::AudioClip_PCMSetPositionCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::AudioClip_PCMSetPositionCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip_PCMSetPositionCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::AudioClip_PCMSetPositionCallback::Invoke(int32_t  position)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AudioClip_PCMSetPositionCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline ::UnityEngine::AudioClip_PCMSetPositionCallback* UnityEngine::AudioClip_PCMSetPositionCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AudioClip_PCMSetPositionCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::AudioClip_PCMSetPositionCallback::AudioClip_PCMSetPositionCallback()   {
}
//  Writing Method size for method: ::UnityEngine::AudioClip._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioClip::*)()>(&::UnityEngine::AudioClip::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182239420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.GetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::AudioClip*, ::System::Span_1<float_t>, int32_t)>(&::UnityEngine::AudioClip::GetData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182238f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"GetData", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::System::Span_1<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.SetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::AudioClip*, ::System::ReadOnlySpan_1<float_t>, int32_t)>(&::UnityEngine::AudioClip::SetData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182239330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"SetData", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::System::ReadOnlySpan_1<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.Construct_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (*)()>(&::UnityEngine::AudioClip::Construct_Internal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182238840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"Construct_Internal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.GetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AudioClip::*)()>(&::UnityEngine::AudioClip::GetName)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182239050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"GetName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.CreateUserSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioClip::*)(::StringW, int32_t, int32_t, int32_t, bool)>(&::UnityEngine::AudioClip::CreateUserSound)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x182238870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"CreateUserSound", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AudioClip::*)()>(&::UnityEngine::AudioClip::get_length)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822395f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"get_length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_samples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AudioClip::*)()>(&::UnityEngine::AudioClip::get_samples)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182239670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"get_samples", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_channels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AudioClip::*)()>(&::UnityEngine::AudioClip::get_channels)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182239570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"get_channels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_frequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AudioClip::*)()>(&::UnityEngine::AudioClip::get_frequency)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822395b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"get_frequency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.LoadAudioData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioClip::*)()>(&::UnityEngine::AudioClip::LoadAudioData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182239150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"LoadAudioData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.UnloadAudioData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioClip::*)()>(&::UnityEngine::AudioClip::UnloadAudioData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822393f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"UnloadAudioData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_loadState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AudioDataLoadState (::UnityEngine::AudioClip::*)()>(&::UnityEngine::AudioClip::get_loadState)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182239630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"get_loadState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.GetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioClip::*)(::ArrayW<float_t>, int32_t)>(&::UnityEngine::AudioClip::GetData)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x182238e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"GetData", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.SetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioClip::*)(::ArrayW<float_t>, int32_t)>(&::UnityEngine::AudioClip::SetData)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x182239190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"SetData", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (*)(::StringW, int32_t, int32_t, int32_t, bool)>(&::UnityEngine::AudioClip::Create)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182238d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (*)(::StringW, int32_t, int32_t, int32_t, bool, ::UnityEngine::AudioClip_PCMReaderCallback*)>(&::UnityEngine::AudioClip::Create)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1822389c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::AudioClip_PCMReaderCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (*)(::StringW, int32_t, int32_t, int32_t, bool, ::UnityEngine::AudioClip_PCMReaderCallback*, ::UnityEngine::AudioClip_PCMSetPositionCallback*)>(&::UnityEngine::AudioClip::Create)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x182238b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::AudioClip_PCMReaderCallback*>(), ::i2c::type_of<::UnityEngine::AudioClip_PCMSetPositionCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.add_m_PCMReaderCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioClip::*)(::UnityEngine::AudioClip_PCMReaderCallback*)>(&::UnityEngine::AudioClip::add_m_PCMReaderCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182239460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"add_m_PCMReaderCallback", {}, {::i2c::type_of<::UnityEngine::AudioClip_PCMReaderCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.remove_m_PCMReaderCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioClip::*)(::UnityEngine::AudioClip_PCMReaderCallback*)>(&::UnityEngine::AudioClip::remove_m_PCMReaderCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1822396a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"remove_m_PCMReaderCallback", {}, {::i2c::type_of<::UnityEngine::AudioClip_PCMReaderCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.add_m_PCMSetPositionCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioClip::*)(::UnityEngine::AudioClip_PCMSetPositionCallback*)>(&::UnityEngine::AudioClip::add_m_PCMSetPositionCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1822394e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"add_m_PCMSetPositionCallback", {}, {::i2c::type_of<::UnityEngine::AudioClip_PCMSetPositionCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.remove_m_PCMSetPositionCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioClip::*)(::UnityEngine::AudioClip_PCMSetPositionCallback*)>(&::UnityEngine::AudioClip::remove_m_PCMSetPositionCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182239720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"remove_m_PCMSetPositionCallback", {}, {::i2c::type_of<::UnityEngine::AudioClip_PCMSetPositionCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.InvokePCMReaderCallback_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioClip::*)(::ArrayW<float_t>)>(&::UnityEngine::AudioClip::InvokePCMReaderCallback_Internal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182239100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"InvokePCMReaderCallback_Internal", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.InvokePCMSetPositionCallback_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioClip::*)(int32_t)>(&::UnityEngine::AudioClip::InvokePCMSetPositionCallback_Internal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182239120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"InvokePCMSetPositionCallback_Internal", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.UnityEngine_Audio_GeneratorInstance_ICapabilities_get_isRealtime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioClip::*)()>(&::UnityEngine::AudioClip::UnityEngine_Audio_GeneratorInstance_ICapabilities_get_isRealtime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b4350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"UnityEngine.Audio.GeneratorInstance.ICapabilities.get_isRealtime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.UnityEngine_Audio_GeneratorInstance_ICapabilities_get_isFinite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AudioClip::*)()>(&::UnityEngine::AudioClip::UnityEngine_Audio_GeneratorInstance_ICapabilities_get_isFinite)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b4350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"UnityEngine.Audio.GeneratorInstance.ICapabilities.get_isFinite", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.UnityEngine_Audio_GeneratorInstance_ICapabilities_get_length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Unity::IntegerTime::DiscreteTime> (::UnityEngine::AudioClip::*)()>(&::UnityEngine::AudioClip::UnityEngine_Audio_GeneratorInstance_ICapabilities_get_length)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b4350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"UnityEngine.Audio.GeneratorInstance.ICapabilities.get_length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.UnityEngine_Audio_IAudioGenerator_CreateInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::GeneratorInstance (::UnityEngine::AudioClip::*)(::UnityEngine::Audio::ControlContext, ::System::Nullable_1<::UnityEngine::Audio::AudioFormat>, ::UnityEngine::Audio::ProcessorInstance_CreationParameters)>(&::UnityEngine::AudioClip::UnityEngine_Audio_IAudioGenerator_CreateInstance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b4350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"UnityEngine.Audio.IAudioGenerator.CreateInstance", {}, {::i2c::type_of<::UnityEngine::Audio::ControlContext>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Audio::AudioFormat>>(), ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance_CreationParameters>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.GetData_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t)>(&::UnityEngine::AudioClip::GetData_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182238e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"GetData_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.SetData_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t)>(&::UnityEngine::AudioClip::SetData_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182239180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"SetData_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.Construct_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::AudioClip::Construct_Internal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182238830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"Construct_Internal_Injected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.GetName_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AudioClip::GetName_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182239040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"GetName_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.CreateUserSound_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t, int32_t, int32_t, bool)>(&::UnityEngine::AudioClip::CreateUserSound_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182238860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"CreateUserSound_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_length_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::AudioClip::get_length_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822395e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"get_length_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_samples_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::AudioClip::get_samples_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182239660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"get_samples_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_channels_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::AudioClip::get_channels_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182239560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"get_channels_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_frequency_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::AudioClip::get_frequency_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822395a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"get_frequency_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.LoadAudioData_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::AudioClip::LoadAudioData_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182239140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"LoadAudioData_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.UnloadAudioData_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::AudioClip::UnloadAudioData_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822393e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"UnloadAudioData_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioClip.get_loadState_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AudioDataLoadState (*)(::System::IntPtr)>(&::UnityEngine::AudioClip::get_loadState_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182239620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"get_loadState_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AudioClip_PCMReaderCallback*& UnityEngine::AudioClip::__cordl_internal_get_m_PCMReaderCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PCMReaderCallback;
}
constexpr ::UnityEngine::AudioClip_PCMReaderCallback* const& UnityEngine::AudioClip::__cordl_internal_get_m_PCMReaderCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PCMReaderCallback;
}
constexpr void UnityEngine::AudioClip::__cordl_internal_set_m_PCMReaderCallback(::UnityEngine::AudioClip_PCMReaderCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PCMReaderCallback = value;
}
constexpr ::UnityEngine::AudioClip_PCMSetPositionCallback*& UnityEngine::AudioClip::__cordl_internal_get_m_PCMSetPositionCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PCMSetPositionCallback;
}
constexpr ::UnityEngine::AudioClip_PCMSetPositionCallback* const& UnityEngine::AudioClip::__cordl_internal_get_m_PCMSetPositionCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PCMSetPositionCallback;
}
constexpr void UnityEngine::AudioClip::__cordl_internal_set_m_PCMSetPositionCallback(::UnityEngine::AudioClip_PCMSetPositionCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PCMSetPositionCallback = value;
}
inline void UnityEngine::AudioClip::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::AudioClip::GetData(::UnityEngine::AudioClip*  clip, ::System::Span_1<float_t>  data, int32_t  samplesOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"GetData", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::System::Span_1<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clip, data, samplesOffset);
}
inline bool UnityEngine::AudioClip::SetData(::UnityEngine::AudioClip*  clip, ::System::ReadOnlySpan_1<float_t>  data, int32_t  samplesOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"SetData", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::System::ReadOnlySpan_1<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clip, data, samplesOffset);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::AudioClip::Construct_Internal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"Construct_Internal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::AudioClip::GetName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"GetName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::AudioClip::CreateUserSound(::StringW  name, int32_t  lengthSamples, int32_t  channels, int32_t  frequency, bool  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"CreateUserSound", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, lengthSamples, channels, frequency, stream);
}
inline float_t UnityEngine::AudioClip::get_length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"get_length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t UnityEngine::AudioClip::get_samples()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"get_samples", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::AudioClip::get_channels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"get_channels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::AudioClip::get_frequency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"get_frequency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::AudioClip::LoadAudioData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"LoadAudioData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::AudioClip::UnloadAudioData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"UnloadAudioData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::AudioDataLoadState UnityEngine::AudioClip::get_loadState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"get_loadState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioDataLoadState>(this, ___internal_method);
}
inline bool UnityEngine::AudioClip::GetData(::ArrayW<float_t>  data, int32_t  offsetSamples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"GetData", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, offsetSamples);
}
inline bool UnityEngine::AudioClip::SetData(::ArrayW<float_t>  data, int32_t  offsetSamples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"SetData", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, offsetSamples);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::AudioClip::Create(::StringW  name, int32_t  lengthSamples, int32_t  channels, int32_t  frequency, bool  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(nullptr, ___internal_method, name, lengthSamples, channels, frequency, stream);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::AudioClip::Create(::StringW  name, int32_t  lengthSamples, int32_t  channels, int32_t  frequency, bool  stream, ::UnityEngine::AudioClip_PCMReaderCallback*  pcmreadercallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::AudioClip_PCMReaderCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(nullptr, ___internal_method, name, lengthSamples, channels, frequency, stream, pcmreadercallback);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::AudioClip::Create(::StringW  name, int32_t  lengthSamples, int32_t  channels, int32_t  frequency, bool  stream, ::UnityEngine::AudioClip_PCMReaderCallback*  pcmreadercallback, ::UnityEngine::AudioClip_PCMSetPositionCallback*  pcmsetpositioncallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::AudioClip_PCMReaderCallback*>(), ::i2c::type_of<::UnityEngine::AudioClip_PCMSetPositionCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(nullptr, ___internal_method, name, lengthSamples, channels, frequency, stream, pcmreadercallback, pcmsetpositioncallback);
}
inline void UnityEngine::AudioClip::add_m_PCMReaderCallback(::UnityEngine::AudioClip_PCMReaderCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"add_m_PCMReaderCallback", {}, {::i2c::type_of<::UnityEngine::AudioClip_PCMReaderCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AudioClip::remove_m_PCMReaderCallback(::UnityEngine::AudioClip_PCMReaderCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"remove_m_PCMReaderCallback", {}, {::i2c::type_of<::UnityEngine::AudioClip_PCMReaderCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AudioClip::add_m_PCMSetPositionCallback(::UnityEngine::AudioClip_PCMSetPositionCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"add_m_PCMSetPositionCallback", {}, {::i2c::type_of<::UnityEngine::AudioClip_PCMSetPositionCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AudioClip::remove_m_PCMSetPositionCallback(::UnityEngine::AudioClip_PCMSetPositionCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"remove_m_PCMSetPositionCallback", {}, {::i2c::type_of<::UnityEngine::AudioClip_PCMSetPositionCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AudioClip::InvokePCMReaderCallback_Internal(::ArrayW<float_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"InvokePCMReaderCallback_Internal", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void UnityEngine::AudioClip::InvokePCMSetPositionCallback_Internal(int32_t  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"InvokePCMSetPositionCallback_Internal", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline bool UnityEngine::AudioClip::UnityEngine_Audio_GeneratorInstance_ICapabilities_get_isRealtime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"UnityEngine.Audio.GeneratorInstance.ICapabilities.get_isRealtime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::AudioClip::UnityEngine_Audio_GeneratorInstance_ICapabilities_get_isFinite()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"UnityEngine.Audio.GeneratorInstance.ICapabilities.get_isFinite", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Nullable_1<::Unity::IntegerTime::DiscreteTime> UnityEngine::AudioClip::UnityEngine_Audio_GeneratorInstance_ICapabilities_get_length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"UnityEngine.Audio.GeneratorInstance.ICapabilities.get_length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Unity::IntegerTime::DiscreteTime>>(this, ___internal_method);
}
inline ::UnityEngine::Audio::GeneratorInstance UnityEngine::AudioClip::UnityEngine_Audio_IAudioGenerator_CreateInstance(::UnityEngine::Audio::ControlContext  context, ::System::Nullable_1<::UnityEngine::Audio::AudioFormat>  nestedFormat, ::UnityEngine::Audio::ProcessorInstance_CreationParameters  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"UnityEngine.Audio.IAudioGenerator.CreateInstance", {}, {::i2c::type_of<::UnityEngine::Audio::ControlContext>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Audio::AudioFormat>>(), ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance_CreationParameters>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::GeneratorInstance>(this, ___internal_method, context, nestedFormat, parameters);
}
inline bool UnityEngine::AudioClip::GetData_Injected(::System::IntPtr  clip, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  data, int32_t  samplesOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"GetData_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clip, data, samplesOffset);
}
inline bool UnityEngine::AudioClip::SetData_Injected(::System::IntPtr  clip, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  data, int32_t  samplesOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"SetData_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clip, data, samplesOffset);
}
inline ::System::IntPtr UnityEngine::AudioClip::Construct_Internal_Injected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"Construct_Internal_Injected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::AudioClip::GetName_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"GetName_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::AudioClip::CreateUserSound_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, int32_t  lengthSamples, int32_t  channels, int32_t  frequency, bool  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"CreateUserSound_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name, lengthSamples, channels, frequency, stream);
}
inline float_t UnityEngine::AudioClip::get_length_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"get_length_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::AudioClip::get_samples_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"get_samples_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::AudioClip::get_channels_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"get_channels_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::AudioClip::get_frequency_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"get_frequency_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::AudioClip::LoadAudioData_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"LoadAudioData_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::AudioClip::UnloadAudioData_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"UnloadAudioData_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::AudioDataLoadState UnityEngine::AudioClip::get_loadState_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioClip*>(),
                        {"get_loadState_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioDataLoadState>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::AudioClip* UnityEngine::AudioClip::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AudioClip*>());
}
/// @brief Convert operator to "::UnityEngine::Audio::IAudioGenerator"
constexpr  UnityEngine::AudioClip::operator ::UnityEngine::Audio::IAudioGenerator*() noexcept {
return static_cast<::UnityEngine::Audio::IAudioGenerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Audio::IAudioGenerator"
constexpr ::UnityEngine::Audio::IAudioGenerator* UnityEngine::AudioClip::i___UnityEngine__Audio__IAudioGenerator() noexcept {
return static_cast<::UnityEngine::Audio::IAudioGenerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Audio::GeneratorInstance_ICapabilities"
constexpr  UnityEngine::AudioClip::operator ::UnityEngine::Audio::GeneratorInstance_ICapabilities*() noexcept {
return static_cast<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Audio::GeneratorInstance_ICapabilities"
constexpr ::UnityEngine::Audio::GeneratorInstance_ICapabilities* UnityEngine::AudioClip::i___UnityEngine__Audio__GeneratorInstance_ICapabilities() noexcept {
return static_cast<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::AudioClip::AudioClip()   {
}
