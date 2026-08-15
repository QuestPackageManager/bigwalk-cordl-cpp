#pragma once
// IWYU pragma private; include "Mirror/NetworkTransformReliable.hpp"
#include "Mirror/zzzz__NetworkTransformBase_impl.hpp"
#include "Mirror/zzzz__TransformSnapshot_impl.hpp"
#include "Mirror/zzzz__Vector3Long_impl.hpp"
#include "Mirror/zzzz__NetworkTransformReliable_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "Mirror/zzzz__TransformSnapshot_def.hpp"
#include "System/Collections/Generic/zzzz__SortedList_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Mirror::NetworkTransformReliable.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformReliable::*)()>(&::Mirror::NetworkTransformReliable::Update)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18152a2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformReliable*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformReliable.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformReliable::*)()>(&::Mirror::NetworkTransformReliable::LateUpdate)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181528960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformReliable*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformReliable.UpdateServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformReliable::*)()>(&::Mirror::NetworkTransformReliable::UpdateServer)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18152a100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkTransformReliable*>(),
                    {::i2c::class_of<::Mirror::NetworkTransformReliable*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformReliable.UpdateClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformReliable::*)()>(&::Mirror::NetworkTransformReliable::UpdateClient)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181529f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkTransformReliable*>(),
                    {::i2c::class_of<::Mirror::NetworkTransformReliable*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformReliable.CheckLastSendTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformReliable::*)()>(&::Mirror::NetworkTransformReliable::CheckLastSendTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1815288e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkTransformReliable*>(),
                    {::i2c::class_of<::Mirror::NetworkTransformReliable*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformReliable.Changed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkTransformReliable::*)(::Mirror::TransformSnapshot)>(&::Mirror::NetworkTransformReliable::Changed)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181528790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkTransformReliable*>(),
                    {::i2c::class_of<::Mirror::NetworkTransformReliable*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformReliable.QuantizedChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkTransformReliable::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::Mirror::NetworkTransformReliable::QuantizedChanged)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181517be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformReliable*>(),
                        {"QuantizedChanged", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformReliable.OnSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformReliable::*)(::Mirror::NetworkWriter*, bool)>(&::Mirror::NetworkTransformReliable::OnSerialize)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x181529390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkTransformReliable*>(),
                    {::i2c::class_of<::Mirror::NetworkTransformReliable*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformReliable.OnDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformReliable::*)(::Mirror::NetworkReader*, bool)>(&::Mirror::NetworkTransformReliable::OnDeserialize)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x181528ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkTransformReliable*>(),
                    {::i2c::class_of<::Mirror::NetworkTransformReliable*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformReliable.OnClientToServerSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformReliable::*)(::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::Mirror::NetworkTransformReliable::OnClientToServerSync)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x181528b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkTransformReliable*>(),
                    {::i2c::class_of<::Mirror::NetworkTransformReliable*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformReliable.OnServerToClientSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformReliable::*)(::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::Mirror::NetworkTransformReliable::OnServerToClientSync)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x181529920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkTransformReliable*>(),
                    {::i2c::class_of<::Mirror::NetworkTransformReliable*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformReliable.NeedsCorrection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>*, double_t, double_t, double_t)>(&::Mirror::NetworkTransformReliable::NeedsCorrection)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181528a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformReliable*>(),
                        {"NeedsCorrection", {}, {::i2c::type_of<::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformReliable.RewriteHistory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>*, double_t, double_t, double_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::Mirror::NetworkTransformReliable::RewriteHistory)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181529e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformReliable*>(),
                        {"RewriteHistory", {}, {::i2c::type_of<::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformReliable.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformReliable::*)()>(&::Mirror::NetworkTransformReliable::Reset)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181529cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkTransformReliable*>(),
                    {::i2c::class_of<::Mirror::NetworkTransformReliable*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformReliable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformReliable::*)()>(&::Mirror::NetworkTransformReliable::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18152a330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformReliable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformReliable.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformReliable::*)()>(&::Mirror::NetworkTransformReliable::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformReliable*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Mirror::NetworkTransformReliable::__cordl_internal_get_onlySyncOnChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlySyncOnChange;
}
constexpr bool const& Mirror::NetworkTransformReliable::__cordl_internal_get_onlySyncOnChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlySyncOnChange;
}
constexpr void Mirror::NetworkTransformReliable::__cordl_internal_set_onlySyncOnChange(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onlySyncOnChange = value;
}
constexpr uint32_t& Mirror::NetworkTransformReliable::__cordl_internal_get_sendIntervalCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendIntervalCounter;
}
constexpr uint32_t const& Mirror::NetworkTransformReliable::__cordl_internal_get_sendIntervalCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendIntervalCounter;
}
constexpr void Mirror::NetworkTransformReliable::__cordl_internal_set_sendIntervalCounter(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendIntervalCounter = value;
}
constexpr double_t& Mirror::NetworkTransformReliable::__cordl_internal_get_lastSendIntervalTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSendIntervalTime;
}
constexpr double_t const& Mirror::NetworkTransformReliable::__cordl_internal_get_lastSendIntervalTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSendIntervalTime;
}
constexpr void Mirror::NetworkTransformReliable::__cordl_internal_set_lastSendIntervalTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSendIntervalTime = value;
}
constexpr float_t& Mirror::NetworkTransformReliable::__cordl_internal_get_onlySyncOnChangeCorrectionMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlySyncOnChangeCorrectionMultiplier;
}
constexpr float_t const& Mirror::NetworkTransformReliable::__cordl_internal_get_onlySyncOnChangeCorrectionMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlySyncOnChangeCorrectionMultiplier;
}
constexpr void Mirror::NetworkTransformReliable::__cordl_internal_set_onlySyncOnChangeCorrectionMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onlySyncOnChangeCorrectionMultiplier = value;
}
constexpr float_t& Mirror::NetworkTransformReliable::__cordl_internal_get_rotationSensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSensitivity;
}
constexpr float_t const& Mirror::NetworkTransformReliable::__cordl_internal_get_rotationSensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSensitivity;
}
constexpr void Mirror::NetworkTransformReliable::__cordl_internal_set_rotationSensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationSensitivity = value;
}
constexpr bool& Mirror::NetworkTransformReliable::__cordl_internal_get_compressRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressRotation;
}
constexpr bool const& Mirror::NetworkTransformReliable::__cordl_internal_get_compressRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressRotation;
}
constexpr void Mirror::NetworkTransformReliable::__cordl_internal_set_compressRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compressRotation = value;
}
constexpr float_t& Mirror::NetworkTransformReliable::__cordl_internal_get_positionPrecision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionPrecision;
}
constexpr float_t const& Mirror::NetworkTransformReliable::__cordl_internal_get_positionPrecision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionPrecision;
}
constexpr void Mirror::NetworkTransformReliable::__cordl_internal_set_positionPrecision(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionPrecision = value;
}
constexpr float_t& Mirror::NetworkTransformReliable::__cordl_internal_get_scalePrecision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scalePrecision;
}
constexpr float_t const& Mirror::NetworkTransformReliable::__cordl_internal_get_scalePrecision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scalePrecision;
}
constexpr void Mirror::NetworkTransformReliable::__cordl_internal_set_scalePrecision(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scalePrecision = value;
}
constexpr ::Mirror::Vector3Long& Mirror::NetworkTransformReliable::__cordl_internal_get_lastSerializedPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSerializedPosition;
}
constexpr ::Mirror::Vector3Long const& Mirror::NetworkTransformReliable::__cordl_internal_get_lastSerializedPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSerializedPosition;
}
constexpr void Mirror::NetworkTransformReliable::__cordl_internal_set_lastSerializedPosition(::Mirror::Vector3Long  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSerializedPosition = value;
}
constexpr ::Mirror::Vector3Long& Mirror::NetworkTransformReliable::__cordl_internal_get_lastDeserializedPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDeserializedPosition;
}
constexpr ::Mirror::Vector3Long const& Mirror::NetworkTransformReliable::__cordl_internal_get_lastDeserializedPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDeserializedPosition;
}
constexpr void Mirror::NetworkTransformReliable::__cordl_internal_set_lastDeserializedPosition(::Mirror::Vector3Long  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastDeserializedPosition = value;
}
constexpr ::Mirror::Vector3Long& Mirror::NetworkTransformReliable::__cordl_internal_get_lastSerializedScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSerializedScale;
}
constexpr ::Mirror::Vector3Long const& Mirror::NetworkTransformReliable::__cordl_internal_get_lastSerializedScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSerializedScale;
}
constexpr void Mirror::NetworkTransformReliable::__cordl_internal_set_lastSerializedScale(::Mirror::Vector3Long  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSerializedScale = value;
}
constexpr ::Mirror::Vector3Long& Mirror::NetworkTransformReliable::__cordl_internal_get_lastDeserializedScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDeserializedScale;
}
constexpr ::Mirror::Vector3Long const& Mirror::NetworkTransformReliable::__cordl_internal_get_lastDeserializedScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDeserializedScale;
}
constexpr void Mirror::NetworkTransformReliable::__cordl_internal_set_lastDeserializedScale(::Mirror::Vector3Long  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastDeserializedScale = value;
}
constexpr ::Mirror::TransformSnapshot& Mirror::NetworkTransformReliable::__cordl_internal_get_last()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___last;
}
constexpr ::Mirror::TransformSnapshot const& Mirror::NetworkTransformReliable::__cordl_internal_get_last() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___last;
}
constexpr void Mirror::NetworkTransformReliable::__cordl_internal_set_last(::Mirror::TransformSnapshot  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___last = value;
}
constexpr int32_t& Mirror::NetworkTransformReliable::__cordl_internal_get_lastClientCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastClientCount;
}
constexpr int32_t const& Mirror::NetworkTransformReliable::__cordl_internal_get_lastClientCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastClientCount;
}
constexpr void Mirror::NetworkTransformReliable::__cordl_internal_set_lastClientCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastClientCount = value;
}
inline void Mirror::NetworkTransformReliable::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformReliable*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkTransformReliable::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformReliable*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkTransformReliable::UpdateServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkTransformReliable*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkTransformReliable::UpdateClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkTransformReliable*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkTransformReliable::CheckLastSendTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkTransformReliable*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::NetworkTransformReliable::Changed(::Mirror::TransformSnapshot  current)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkTransformReliable*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, current);
}
inline bool Mirror::NetworkTransformReliable::QuantizedChanged(::UnityEngine::Vector3  u, ::UnityEngine::Vector3  v, float_t  precision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformReliable*>(),
                        {"QuantizedChanged", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, u, v, precision);
}
inline void Mirror::NetworkTransformReliable::OnSerialize(::Mirror::NetworkWriter*  writer, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkTransformReliable*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, initialState);
}
inline void Mirror::NetworkTransformReliable::OnDeserialize(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkTransformReliable*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline void Mirror::NetworkTransformReliable::OnClientToServerSync(::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::UnityEngine::Vector3>  scale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkTransformReliable*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation, scale);
}
inline void Mirror::NetworkTransformReliable::OnServerToClientSync(::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::UnityEngine::Vector3>  scale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkTransformReliable*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation, scale);
}
inline bool Mirror::NetworkTransformReliable::NeedsCorrection(::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>*  snapshots, double_t  remoteTimestamp, double_t  bufferTime, double_t  toleranceMultiplier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformReliable*>(),
                        {"NeedsCorrection", {}, {::i2c::type_of<::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, snapshots, remoteTimestamp, bufferTime, toleranceMultiplier);
}
inline void Mirror::NetworkTransformReliable::RewriteHistory(::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>*  snapshots, double_t  remoteTimeStamp, double_t  localTime, double_t  sendInterval, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformReliable*>(),
                        {"RewriteHistory", {}, {::i2c::type_of<::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, snapshots, remoteTimeStamp, localTime, sendInterval, position, rotation, scale);
}
inline void Mirror::NetworkTransformReliable::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkTransformReliable*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkTransformReliable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformReliable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkTransformReliable::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformReliable*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::NetworkTransformReliable* Mirror::NetworkTransformReliable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkTransformReliable*>());
}
// Ctor Parameters []
constexpr ::Mirror::NetworkTransformReliable::NetworkTransformReliable()   {
}
