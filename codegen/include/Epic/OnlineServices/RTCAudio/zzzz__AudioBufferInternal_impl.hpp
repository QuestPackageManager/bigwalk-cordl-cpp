#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/AudioBufferInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__AudioBufferInternal_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__AudioBuffer_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::AudioBufferInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::AudioBufferInternal::*)(::by_ref<::Epic::OnlineServices::RTCAudio::AudioBuffer>)>(&::Epic::OnlineServices::RTCAudio::AudioBufferInternal::Get)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804e6db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AudioBufferInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AudioBuffer>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::AudioBufferInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::AudioBufferInternal::*)(::by_ref<::Epic::OnlineServices::RTCAudio::AudioBuffer>)>(&::Epic::OnlineServices::RTCAudio::AudioBufferInternal::Set)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804e6e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AudioBufferInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AudioBuffer>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::AudioBufferInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::AudioBufferInternal::*)()>(&::Epic::OnlineServices::RTCAudio::AudioBufferInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AudioBufferInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAudio::AudioBufferInternal::Get(::by_ref<::Epic::OnlineServices::RTCAudio::AudioBuffer>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AudioBufferInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AudioBuffer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::RTCAudio::AudioBufferInternal::Set(::by_ref<::Epic::OnlineServices::RTCAudio::AudioBuffer>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AudioBufferInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AudioBuffer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::RTCAudio::AudioBufferInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AudioBufferInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioBuffer>"
constexpr  Epic::OnlineServices::RTCAudio::AudioBufferInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioBuffer>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioBuffer>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioBuffer>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioBuffer>* Epic::OnlineServices::RTCAudio::AudioBufferInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__RTCAudio__AudioBuffer_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioBuffer>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::AudioBuffer>"
constexpr  Epic::OnlineServices::RTCAudio::AudioBufferInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::AudioBuffer>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::AudioBuffer>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::AudioBuffer>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::AudioBuffer>* Epic::OnlineServices::RTCAudio::AudioBufferInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__RTCAudio__AudioBuffer_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::AudioBuffer>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::RTCAudio::AudioBufferInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::RTCAudio::AudioBufferInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Frames", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FramesCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SampleRate", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Channels", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTCAudio::AudioBufferInternal::AudioBufferInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Frames, uint32_t  m_FramesCount, uint32_t  m_SampleRate, uint32_t  m_Channels) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Frames = m_Frames;
this->m_FramesCount = m_FramesCount;
this->m_SampleRate = m_SampleRate;
this->m_Channels = m_Channels;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::AudioBufferInternal::AudioBufferInternal()   {
}
