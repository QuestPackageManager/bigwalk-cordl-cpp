#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/LowLevelInputEventQueue.hpp"
#include "Rewired/zzzz__LowLevelInputEvent_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__LowLevelInputEventQueue_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__NativeRingBuffer_def.hpp"
#include "Rewired/zzzz__LowLevelInputEvent_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::*)()>(&::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::get_Count)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181930940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue.get_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::*)()>(&::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::get_Capacity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d4dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(),
                        {"get_Capacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue.get_CapacityBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::*)()>(&::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::get_CapacityBytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181930930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(),
                        {"get_CapacityBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::LowLevelInputEvent (::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::*)(int32_t)>(&::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::get_Item)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181930960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::*)(int32_t, int32_t, int32_t, int32_t)>(&::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181930850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue.CreateEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::LowLevelInputEvent (::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::*)()>(&::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::CreateEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181930590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(),
                        {"CreateEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue.FindNextIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::*)(uint32_t)>(&::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::FindNextIndex)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1819306c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(),
                        {"FindNextIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue.TryGetNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::*)(int32_t, ::by_ref<::Rewired::LowLevelInputEvent>)>(&::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::TryGetNext)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181930790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(),
                        {"TryGetNext", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Rewired::LowLevelInputEvent>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::*)()>(&::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::Clear)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181930300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue.CopyAllFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::*)(::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*)>(&::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::CopyAllFrom)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181930320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(),
                        {"CopyAllFrom", {}, {::i2c::type_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue.CopyNewEventsFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::*)(::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*)>(&::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::CopyNewEventsFrom)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x181930380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(),
                        {"CopyNewEventsFrom", {}, {::i2c::type_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::*)()>(&::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181930630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::*)()>(&::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::Finalize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1819306b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::*)(bool)>(&::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181930670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::LowLevelInputEvent& Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::__cordl_internal_get_rAiPTXfocmBVRbOApFDGwfYilOEHA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rAiPTXfocmBVRbOApFDGwfYilOEHA;
}
constexpr ::Rewired::LowLevelInputEvent const& Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::__cordl_internal_get_rAiPTXfocmBVRbOApFDGwfYilOEHA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rAiPTXfocmBVRbOApFDGwfYilOEHA;
}
constexpr void Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::__cordl_internal_set_rAiPTXfocmBVRbOApFDGwfYilOEHA(::Rewired::LowLevelInputEvent  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rAiPTXfocmBVRbOApFDGwfYilOEHA = value;
}
constexpr ::Rewired::Utils::Classes::Data::NativeRingBuffer*& Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::__cordl_internal_get_FzjNqptsEZwrXopQDnqeNuJpXnik()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FzjNqptsEZwrXopQDnqeNuJpXnik;
}
constexpr ::Rewired::Utils::Classes::Data::NativeRingBuffer* const& Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::__cordl_internal_get_FzjNqptsEZwrXopQDnqeNuJpXnik() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FzjNqptsEZwrXopQDnqeNuJpXnik;
}
constexpr void Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::__cordl_internal_set_FzjNqptsEZwrXopQDnqeNuJpXnik(::Rewired::Utils::Classes::Data::NativeRingBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FzjNqptsEZwrXopQDnqeNuJpXnik = value;
}
constexpr int32_t& Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::__cordl_internal_get_AKoQKOBczmeWMcQAjbwJTEqjDEQV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AKoQKOBczmeWMcQAjbwJTEqjDEQV;
}
constexpr int32_t const& Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::__cordl_internal_get_AKoQKOBczmeWMcQAjbwJTEqjDEQV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AKoQKOBczmeWMcQAjbwJTEqjDEQV;
}
constexpr void Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::__cordl_internal_set_AKoQKOBczmeWMcQAjbwJTEqjDEQV(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AKoQKOBczmeWMcQAjbwJTEqjDEQV = value;
}
constexpr int32_t& Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::__cordl_internal_get_VFEExbTbmUXfIxCEagQWuVEJxngU()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VFEExbTbmUXfIxCEagQWuVEJxngU;
}
constexpr int32_t const& Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::__cordl_internal_get_VFEExbTbmUXfIxCEagQWuVEJxngU() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VFEExbTbmUXfIxCEagQWuVEJxngU;
}
constexpr void Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::__cordl_internal_set_VFEExbTbmUXfIxCEagQWuVEJxngU(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VFEExbTbmUXfIxCEagQWuVEJxngU = value;
}
constexpr int32_t& Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::__cordl_internal_get_NlcsmDQUsJaGqevRkdaxJfvLPeRx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NlcsmDQUsJaGqevRkdaxJfvLPeRx;
}
constexpr int32_t const& Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::__cordl_internal_get_NlcsmDQUsJaGqevRkdaxJfvLPeRx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NlcsmDQUsJaGqevRkdaxJfvLPeRx;
}
constexpr void Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::__cordl_internal_set_NlcsmDQUsJaGqevRkdaxJfvLPeRx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NlcsmDQUsJaGqevRkdaxJfvLPeRx = value;
}
constexpr int32_t& Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::__cordl_internal_get_wWiYGSloQAkiDiRVoPMJNemcCvjk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wWiYGSloQAkiDiRVoPMJNemcCvjk;
}
constexpr int32_t const& Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::__cordl_internal_get_wWiYGSloQAkiDiRVoPMJNemcCvjk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wWiYGSloQAkiDiRVoPMJNemcCvjk;
}
constexpr void Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::__cordl_internal_set_wWiYGSloQAkiDiRVoPMJNemcCvjk(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wWiYGSloQAkiDiRVoPMJNemcCvjk = value;
}
constexpr int32_t& Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::__cordl_internal_get_ejMgbYIhEYLKqhfYgbDkxKwskTEKB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ejMgbYIhEYLKqhfYgbDkxKwskTEKB;
}
constexpr int32_t const& Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::__cordl_internal_get_ejMgbYIhEYLKqhfYgbDkxKwskTEKB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ejMgbYIhEYLKqhfYgbDkxKwskTEKB;
}
constexpr void Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::__cordl_internal_set_ejMgbYIhEYLKqhfYgbDkxKwskTEKB(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ejMgbYIhEYLKqhfYgbDkxKwskTEKB = value;
}
constexpr uint32_t& Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::__cordl_internal_get_XuyEcckfxKOeZqibxFjBrvuhClBoA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XuyEcckfxKOeZqibxFjBrvuhClBoA;
}
constexpr uint32_t const& Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::__cordl_internal_get_XuyEcckfxKOeZqibxFjBrvuhClBoA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XuyEcckfxKOeZqibxFjBrvuhClBoA;
}
constexpr void Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::__cordl_internal_set_XuyEcckfxKOeZqibxFjBrvuhClBoA(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XuyEcckfxKOeZqibxFjBrvuhClBoA = value;
}
constexpr bool& Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::__cordl_internal_get_rWDXwKBSunBDSSUXXIpkRyFHEOnu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rWDXwKBSunBDSSUXXIpkRyFHEOnu;
}
constexpr bool const& Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::__cordl_internal_get_rWDXwKBSunBDSSUXXIpkRyFHEOnu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rWDXwKBSunBDSSUXXIpkRyFHEOnu;
}
constexpr void Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::__cordl_internal_set_rWDXwKBSunBDSSUXXIpkRyFHEOnu(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rWDXwKBSunBDSSUXXIpkRyFHEOnu = value;
}
inline int32_t Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::get_CapacityBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(),
                        {"get_CapacityBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Rewired::LowLevelInputEvent Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::LowLevelInputEvent>(this, ___internal_method, index);
}
inline void Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline ::Rewired::LowLevelInputEvent Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::CreateEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(),
                        {"CreateEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::LowLevelInputEvent>(this, ___internal_method);
}
inline int32_t Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::FindNextIndex(uint32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(),
                        {"FindNextIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, id);
}
inline bool Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::TryGetNext(int32_t  index, ::by_ref<::Rewired::LowLevelInputEvent>  event)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(),
                        {"TryGetNext", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Rewired::LowLevelInputEvent>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, event);
}
inline void Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::CopyAllFrom(::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(),
                        {"CopyAllFrom", {}, {::i2c::type_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::CopyNewEventsFrom(::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(),
                        {"CopyNewEventsFrom", {}, {::i2c::type_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue* Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue::LowLevelInputEventQueue()   {
}
