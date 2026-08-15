#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ProgressionSnapshot/EndSnapshotOptionsInternal.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__EndSnapshotOptionsInternal_def.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__EndSnapshotOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptionsInternal::*)(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptions>)>(&::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bdbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptionsInternal::*)()>(&::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptionsInternal::Set(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptions>"
constexpr  Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptions>* Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__ProgressionSnapshot__EndSnapshotOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SnapshotId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptionsInternal::EndSnapshotOptionsInternal(int32_t  m_ApiVersion, uint32_t  m_SnapshotId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_SnapshotId = m_SnapshotId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptionsInternal::EndSnapshotOptionsInternal()   {
}
